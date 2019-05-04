#ifndef __CADASTRAR_H__
#define __CADASTRAR_H__

#include "utilitarios.h"

template <typename C>
std::string cadastrar(std::deque<std::string> caminho){
	C classe;
	while(classe.getContadorCin() != -1){
		std::string titulo = "CADASTRAR";
		printCabecalho(titulo, caminho);

		std::cout << classe;
		std::cin >> classe;
	}

	std::string titulo = "CADASTRAR";
	printCabecalho(titulo, caminho);
	std::cout << classe;

	std::string continuar;
	std::cout << "\nCONFIRMAR CADASTRO (s/n): ";
	std::cin >> continuar;

	if(continuar == "s"){
		classe.inserirCSV("csv/funcionarios.csv");
		return "Cadastrado com sucesso.";
	} else {
		return "Não foi cadastrado com sucesso.";
	}

}

#endif // __CADASTRAR_H__