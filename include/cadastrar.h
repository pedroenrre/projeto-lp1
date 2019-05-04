#ifndef __CADASTRAR_H__
#define __CADASTRAR_H__

#include "excecao.h"
#include "utilitarios.h"

template <typename C>
void printPainelCadastrar(C &classe, std::deque<std::string> caminho, Excecao &excecao){
	std::string titulo = "CADASTRAR";
	printCabecalho(titulo, caminho);
	std::cout << classe;
	excecao.printMensagem();
	excecao.limparMensagem();
}

template <typename C>
std::string cadastrar(std::deque<std::string> caminho){
	
	C classe;
	Excecao excecao;

	while(classe.getContadorCin() != -1){

		try{
			printPainelCadastrar(classe, caminho, excecao);
			std::cin >> classe;

		} catch(Excecao &e){
			std::string msg = e.getMensagem();
			excecao.setMensagem(msg);
			int contadorCin = classe.getContadorCin();
			classe.setContadorCin(contadorCin-1);
		}
	}

	printPainelCadastrar(classe, caminho, excecao);
	std::string continuar;
	std::cout << "\nCONFIRMAR CADASTRO (s/n): ";
	std::cin >> continuar;

	if(continuar == "s"){
		classe.inserirCSV("csv/funcionarios.csv");
		return "Cadastrado com sucesso.";
	} else {
		return "Não foi cadastrado.";
	}

}

#endif // __CADASTRAR_H__