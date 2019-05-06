#ifndef __CONSULTAR_H__
#define __CONSULTAR_H__

#include "excecao.h"
#include "painel.h"
#include "utilitarios.h"
#include "funcionarios/map_funcionarios.h"

template <typename C>
void consultar(MapFuncionarios<C> map, std::deque<std::string> caminho){
    
	Excecao excecao;
	printPainelConsultar(map, caminho, excecao);

    std::string selecao;
    std::cout << "\nSELECIONE O FUNCIONARIO PELO ID: ";
    std::cin >> selecao;

}

template <typename C>
void printPainelConsultar(MapFuncionarios<C> map, std::deque<std::string> caminho, Excecao &excecao){
	std::string titulo = "CONSULTAR";
	printCabecalho(titulo, caminho);
    map.print();
	excecao.printMensagem();
	excecao.limparMensagem();

}

#endif // __CONSULTAR_H__