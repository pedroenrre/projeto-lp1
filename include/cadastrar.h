#ifndef __CADASTRAR_H__
#define __CADASTRAR_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"

template <typename C>
std::string cadastrar(std::deque<std::string> caminho){
	
	C classe;
	Excecao excecao;

	while(classe.getContadorCin() != -1){

		try{
			printPainelCadastrar(classe, caminho, excecao);
			std::cin >> classe;
			
			// Tratamento de erro, caso o usuário insira texto em vez de números
			while(std::cin.fail()){
				std::cin.clear();
				std::cin.ignore(__INT_MAX__, '\n');
				int contadorCin = classe.getContadorCin();
				classe.setContadorCin(contadorCin-1);
				std::string msg = "Valor inválido. Insira um valor númerico.";
				excecao.setMensagem(msg);
				printPainelCadastrar(classe, caminho, excecao);
				std::cin >> classe;
			}

		} catch(Excecao &e){
			std::string msg = e.getMensagem();
			excecao.setMensagem(msg);
			int contadorCin = classe.getContadorCin();
			classe.setContadorCin(contadorCin-1);
		}
	}

	std::string resposta = painelConfirmarCadastro(classe, caminho, excecao);
	return resposta;
}

template <typename C>
void printPainelCadastrar(C &classe, std::deque<std::string> caminho, Excecao &excecao){
	std::string titulo = "CADASTRAR";
	printCabecalho(titulo, caminho);
	std::cout << classe;
	excecao.printMensagem();
	excecao.limparMensagem();
}

template <typename C>
std::string painelConfirmarCadastro(C &classe, std::deque<std::string> caminho, Excecao &excecao){
	
	try{
		printPainelCadastrar(classe, caminho, excecao);
		std::string continuar;
		std::cout << "\nCONFIRMAR CADASTRO (s/n): ";
		std::cin >> continuar;

		if(continuar == "s"){
			classe.inserirCSV("csv/funcionarios.csv");
			return "Cadastrado com sucesso.";
		} else {
			return "O cadastrato não foi efetuado. Tente novamente.";
		}
	} catch(Excecao &e){
		std::string msg = e.getMensagem();
		return msg;		
	}

}

#endif // __CADASTRAR_H__