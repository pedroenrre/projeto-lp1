#ifndef __REMOVER_H__
#define __REMOVER_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"
#include "crud/operacoes_csv.h"

template <typename CLASSE>
void remover(std::string enderecoArquivo, std::deque<std::string> caminho, std::string vet_trat){

    Painel remover;
    OperacoesCSV<CLASSE> csv(enderecoArquivo);
    std::map<int, CLASSE> lista = csv.getLista();
    int selecao = 1;

    if(strcmp(vet_trat.c_str(), "TRATADORES") == 0){
        remover.setTitulo("TRATADORES CADASTRADOS");
    }else{
        remover.setTitulo("VETERINÁRIOS CADASTRADOS");
    }
    caminho.push_back("REMOVER");

    remover.setCaminho(caminho);

    while(selecao != 0){

		try{
            std::cout << remover;

			// Imprime a lista de funcionarios id-nome
	        typename std::map<int, CLASSE>::iterator it;
            for (it = lista.begin(); it != lista.end(); ++it)
                it->second.printIdNome();
            
            std::cout << "\n\t0. VOLTAR\n";
            std::cout << "\nSELECIONE O ID DO FUNCIONARIO OU ZERO [0] PARA VOLTAR: ";
            std::cin >> selecao;
        
			// Tratamento de erro, caso o usuário insira texto em vez de números
			if(std::cin.fail()){
				std::cin.clear();
				std::cin.ignore(__INT_MAX__, '\n');
				throw Excecao("Valor inválido. Insira um valor númerico.");
			}

            painelRemover(selecao, lista, caminho);
            std::cout << selecao <<"\n";
            int teste;
            std::cin >> teste;
		}
		catch(Excecao& e){
			remover.setExcecao(e);
		}
			
	}
   
}

template <typename CLASSE>
int painelRemover(int &id, std::map<int, CLASSE> &lista, std::deque<std::string> caminho){

    typename std::map<int, CLASSE>::iterator it;
    it = lista.find(id);

    if(it == lista.end())
        throw Excecao("O id informado é inválido. Tente novamente."); 
    
    caminho.push_back("REMOVER FUNCIONARIO");
	std::string titulo = "DETALHES DO FUNCIONARIO";	
	
	Painel detalhes(titulo, caminho);	

    int selecao = -1;

	while(selecao != 0 && selecao !=1){

		try{
			std::cout << detalhes;

            std::cout << it->second;
        
            std::cout << "\nOPÇÕES";
            std::cout << "\n\t1. REMOVER FUNCIONARIO";
            std::cout << "\n\t0. CANCELAR REMOÇÃO";
            std::cout << "\n\nESCOLHA SUA OPÇÃO: ";
            std::cin >> selecao;

			// Tratamento de erro, caso o usuário insira texto em vez de números
			if(std::cin.fail()){
				std::cin.clear();
				std::cin.ignore(__INT_MAX__, '\n');
				throw Excecao("Valor inválido. Insira um valor númerico.");
			}

            if(selecao == 1){
                id = 0;
                return id;
            }

		}
		catch(Excecao& e){
			detalhes.setExcecao(e);
		}
			
	}
}


#endif