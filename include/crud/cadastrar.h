#ifndef __CADASTRAR_H__
#define __CADASTRAR_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"
#include "crud/operacoes_csv.h"

template <typename C>
void cadastrar(std::string enderecoArquivo, std::deque<std::string> caminho){

	caminho.push_back("CADASTRAR");
	std::string titulo = "CADASTRAR";	
	
	Painel cadastro(titulo, caminho);
	OperacoesCSV<C> csv(enderecoArquivo);
	C classe;

	while(classe.getContadorCin() != -1){

		try{
			cadastro.printPainel();
			
			int tamanhoLista = csv.getLista().size();
			classe.setId(tamanhoLista+1);

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
	
	confirmarCadastro(enderecoArquivo, classe, cadastro);
}

template <typename C>
void confirmarCadastro(std::string enderecoArquivo, C &classe, Painel &p){

	p.printPainel();
	std::cout << classe;
	std::string continuar;
	std::cout << "\nCONFIRMAR CADASTRO (s/n): ";
	std::cin >> continuar;

	OperacoesCSV<C> csv(enderecoArquivo);

	if(continuar == "s"){
		std::string linha = classe.getStringFormatoCSV();
		csv.inserirLinha(linha);
		throw Excecao("Cadastrado com sucesso.");
	} else {
		throw Excecao("O cadastrato não foi efetuado. Tente novamente.");
	}

}

#endif // __CADASTRAR_H__