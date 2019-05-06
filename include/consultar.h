#ifndef __CONSULTAR_H__
#define __CONSULTAR_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"
#include "funcionarios/map_funcionarios.h"

template <typename C>
void consultar(MapFuncionarios<C> map, std::deque<std::string> caminho){
    
	Excecao excecao;
    int selecao;

    while (selecao != 0){
        try{
            printPainelConsultar(map, caminho, excecao);
            std::cin >> selecao;
            printFuncionario(selecao, map, caminho, excecao);
        
            // Tratamento de erro, caso o usuário insira texto em vez de números        

        } catch(Excecao &e){
            std::string msg = e.getMensagem();
            excecao.setMensagem(msg);
        }
    }
    
   
}

template <typename C>
void printFuncionario(int id, MapFuncionarios<C> map, std::deque<std::string> caminho, Excecao &excecao){

    auto it = map.funcionarios.find(id);

    if(it == map.funcionarios.end()){
        throw Excecao("O id informado é inválido. Tente novamente."); 
    }
    else{
        caminho.push_back("DETALHES");
        printCabecalho("DETALHES", caminho);
        std::cout << it->second;
        excecao.printMensagem();
	    excecao.limparMensagem();
        std::string selecao;
        std::cout << "\n\t0. VOLTAR\n";
        std::cout << "\nVOLTAR: ";
        std::cin >> selecao;
        caminho.pop_back();
    }
}

template <typename C>
void printPainelConsultar(MapFuncionarios<C> map, std::deque<std::string> caminho, Excecao &excecao){
	std::string titulo = "CONSULTAR";
	printCabecalho(titulo, caminho);
    map.print();
	excecao.printMensagem();
	excecao.limparMensagem();
    std::cout << "\n\t0. VOLTAR\n";
    std::cout << "\nSELECIONE O FUNCIONARIO PELO ID: ";
}

#endif // __CONSULTAR_H__