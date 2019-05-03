#ifndef __PAINEIS_H__
#define __PAINEIS_H__

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

#include "painel.h"
#include "cadastrar.h"
#include "funcionarios/tratador.h"
#include "funcionarios/veterinario.h"

void painelPrincipal();
void painelAnimais(std::deque<std::string> caminho);
void painelAnimaisConsulta(std::deque<std::string> caminho);
void painelFuncionarios(std::deque<std::string> caminho);
void painelTratadores(std::deque<std::string> caminho);
void painelVeterinarios(std::deque<std::string> caminho);

template <typename FUNCIONARIO>
void painelFuncionarios(std::string titulo, std::deque<std::string> caminho){
	caminho.push_back(titulo);
	std::string vetor_opcoes[] = {"VOLTAR", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR"};
	std::vector<std::string> opcoes(vetor_opcoes, vetor_opcoes + sizeof(vetor_opcoes) / sizeof(std::string));
	
	Painel painel(titulo, opcoes, caminho);
	
	while(painel.getAbrir()){
		painel.printPainel();
		std::string opcao = painel.getSelecao();

		if(opcao == "1"){
			caminho.push_back("CADASTRAR");
			std::string msg = cadastrar<FUNCIONARIO>(caminho);
			painel.setMensagem(msg);
			caminho.pop_back();

		} else if(opcao == "2"){
			painel.setMensagem("REMOVER");

		} else if(opcao == "3"){
			painel.setMensagem("ALTERAR");

		} else if(opcao == "4"){
			painel.setMensagem("CONSULTAR");

		}
	}
}

#endif // __PAINEIS_H__S