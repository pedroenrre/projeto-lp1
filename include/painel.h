#ifndef __PAINEL_H__
#define __PAINEL_H__

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

/// Classe Painel
/** 
 * Responsável por gerar um painel de controle a partir de um vector de strings
 */
class Painel{
	public:
		/// Construtor de Painel com título e vector de opções.
		/**
		 * @param t Título do painel
		 * @param o Vector de opções
		*/
		Painel(std::string t, std::vector<std::string> o);
		/// Construtor de Painel sem caminho.
		/**
		 * @param t Título do painel
		 * @param o Vector de opções
		 * @param c Deque de caminho
		*/
		Painel(std::string t, std::vector<std::string> o, std::deque<std::string> c);
		//~Painel();

		
		/// Insere o valor da opção que se deseja selecionar 
		/** @param s seleção */
		void setSelecao(int s);
		
		/// Retorna a opção selecionada atualmente 
		/** @return Retorna um inteiro */
		int getSelecao();

		/// Verifica se a opção passada é válida
		/**
		 * Se o int **s** não está entre 0 (zero) e o tamanho do vector opcoes.
		 * Um aviso de erro é setado na variável mensagem.
		 * @param s Opção que s
		*/
		void verificaSelecao(int s);

		/// Imprime o painel
		void printPainel();

		/// Imprime o conteúdo do deque caminho
		void printCaminho();

		/// Atribui uma frase à variável mensagem
		void setMensagem(std::string m);
		
		/// Retorna o conteúdo da variável mensagem
		std::string getMensagem();


	private:
		std::string titulo; ///< titulo do menu
		std::vector<std::string> opcoes; ///< vector com opções que serão exibidas no menu
		std::vector<std::string> opcoes_selecao; ///< vector com primeira palavra de cada item do vector opcoes em letras minúsculas
		std::deque<std::string> caminho; ///< caminho de opções escolhidas até o menu atual
		int selecao = 1; ///< opção selecionada
		std::string mensagem;
};

#endif // __PAINEL_H__