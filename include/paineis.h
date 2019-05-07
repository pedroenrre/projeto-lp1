#ifndef __PAINEIS_H__
#define __PAINEIS_H__

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

#include "painel.h"
#include "crud/cadastrar.h"
#include "crud/consultar.h"
#include "funcionarios/tratador.h"
#include "funcionarios/veterinario.h"

void painelPrincipal();
void painelAnimais(std::deque<std::string> caminho);
void painelAnimaisConsulta(std::deque<std::string> caminho);
void painelFuncionarios(std::deque<std::string> caminho);

template <typename FUNCIONARIO>
void painelFuncionarios(std::string titulo, std::deque<std::string> caminho){
	caminho.push_back(titulo);
	std::vector<std::string> opcoes;
	opcoes.push_back("VOLTAR");
	opcoes.push_back("CADASTRAR");
	opcoes.push_back("REMOVER");
	opcoes.push_back("ALTERAR");
	opcoes.push_back("CONSULTAR");
	
	Painel painel(titulo, opcoes, caminho);
	painel.setPergunta("SELECIONE UMA DAS OPCOES");

	while(painel.getAbrir()){

		try{
			painel.printPainel();
			std::string opcao = painel.getSelecao();

			if(opcao == "1"){
				cadastrar<FUNCIONARIO>("csv/funcionarios.csv", caminho);

			} else if(opcao == "2"){
				painel.setMensagem("REMOVER");

			} else if(opcao == "3"){
				painel.setMensagem("ALTERAR");

			} else if(opcao == "4"){
				consultar<FUNCIONARIO>("csv/funcionarios.csv", caminho);
			}
		}
		catch(Excecao& e){
			painel.setExcecao(e);
		}
			
	}
}

#endif // __PAINEIS_H__S