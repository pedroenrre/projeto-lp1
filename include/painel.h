#ifndef __PAINEL_H__
#define __PAINEL_H__

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

/// Classe Painel
/** 
 * Responsável por gerar um painel de controle a partir de um vector
 */
class Painel{
	public:
		/// Construtor de Painel.
		/**
		 * \param titulo do menu
		 * \param vector de opções
		 * \param deque de caminho
		*/
		Painel(std::string t, std::vector<std::string> o);
		Painel(std::string t, std::vector<std::string> o, std::deque<std::string> c);
		//~Painel();

		void setSelecao(int s);
		int getSelecao();
		void verificaSelecao(int s);

		void printPainel();
		void printCaminho();

		void setMensagem(std::string m);
		std::string getMensagem();

		//void setAbrir(bool a);
		//bool getAbrir();

	private:
		std::string titulo; ///< titulo do menu
		std::vector<std::string> opcoes; ///< vector com opções que serão exibidas no menu
		std::vector<std::string> opcoes_selecao; ///< vector com primeira palavra de cada item do vector opcoes em letras minúsculas
		std::deque<std::string> caminho; ///< caminho de opções escolhidas até o menu atual
		int selecao = 1; ///< opção selecionada
		std::string mensagem;
		//bool abrir = true;
};

#endif // __PAINEL_H__