#ifndef __CADASTRAR_H__
#define __CADASTRAR_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"

template <typename C>
void cadastrar(std::deque<std::string> caminho){

	caminho.push_back("CADASTRAR");
	std::string titulo = "CADASTRAR";	
	
	Painel cadastro(titulo, caminho);	
	C classe;

	while(classe.getContadorCin() != -1){

		try{
			cadastro.printPainel();
			std::cout << classe;
			std::cin >> classe;
			
			// Tratamento de erro, caso o usuário insira texto em vez de números
			if(std::cin.fail()){
				std::cin.clear();
				std::cin.ignore(__INT_MAX__, '\n');
				throw Excecao("Valor inválido. Insira um valor númerico.");
			}
		}
		catch(Excecao& e){
			
			classe.setContadorCin(classe.getContadorCin()-1);
			cadastro.setExcecao(e);
		}
			
	}
	
	confirmarCadastro(classe, cadastro);
}

template <typename C>
void confirmarCadastro(C &classe, Painel &p){

	p.printPainel();
	std::cout << classe;
	std::string continuar;
	std::cout << "\nCONFIRMAR CADASTRO (s/n): ";
	std::cin >> continuar;

	if(continuar == "s"){
		classe.inserirCSV("csv/funcionarios.csv");
		throw Excecao("Cadastrado com sucesso.");
	} else {
		throw Excecao("O cadastrato não foi efetuado. Tente novamente.");
	}

}

#endif // __CADASTRAR_H__