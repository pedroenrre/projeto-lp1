#ifndef __PAINEL_H__
#define __PAINEL_H__

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>

#include <utilitarios.h>

using namespace std;

/// Responsável por gerar um painel de controle a partir de um vector de strings
/** 
 * 
 */
class Painel{
	private:
		std::string titulo; ///< Titulo do painel
		std::vector<std::string> opcoes; ///< Vector com opções que serão exibidas no painel
		std::deque<std::string> caminho; ///< Deque com caminho de opções escolhidas até o painel atual
		std::string mensagem; ///< Mensagem que será exibida no painel 
		std::string selecao; ///< Valor da opção selecionada
		std::vector<std::string> opcoes_selecao; ///< Vector com primeira palavra de cada item do vector 'opcoes' em letras minúsculas
		bool abrir = true; ///<

	public:
		///@name Contrutores e destrutor
		///@{
 
		//! @brief Construtor de Painel com título e vector de opções.
		//! @param t Título do painel
		//! @param o Vector de opções
		Painel(std::string t, std::vector<std::string> o);
		
		//! @brief Construtor de Painel sem caminho.
		//! @param t Título do painel
		//! @param o Vector de opções
		//! @param c Deque de caminho
		Painel(std::string t, std::vector<std::string> o, std::deque<std::string> c);
		
		// Destrutor de Painel
		//~Painel();

		///@}
		///@name Métodos getters
		///@{
		
		//! @brief Retorna o título do painel
		std::string getTitulo();

		//! @brief Retorna o vector das opções do painel
		std::vector<std::string> getOpcoes();

		//! @brief Retorna o deque das opções que foram escolhidas até chegar no painel
		std::deque<std::string> getCaminho();

		//! @brief Retorna o conteúdo da variável mensagem
		std::string getMensagem();

		//! @brief Retorna a opção selecionada atualmente 
		std::string getSelecao();

		//! @brief Retorna o vector da primeira palavra de cada item do vector 'opcoes' em letras minúsculas
		std::vector<std::string> getOpcoesSelecao();

		//! @brief Retorna o vector da primeira palavra de cada item do vector 'opcoes' em letras minúsculas
		bool getAbrir();

		///@}
		///@name Métodos setters
		///@{

		//! @brief Esse método permite que o usuário especifique o título do painel
		//! @param t vector de opções do painel
		void setTitulo(std::string t);

		//! @brief Esse método permite que o usuário especifique o vector de opções do painel
		//! @param o vector de opções do painel
		void setOpcoes(std::vector<std::string> o);

		//! @brief 
		void setCaminho(std::deque<std::string> c);

		//! @brief Esse método permite que o usuário especifique uma mensagem para ser exibida no painel
		//! @param m mensagem a ser exibida no painel
		void setMensagem(std::string m);

		//! @brief Esse método permite que o usuário especifique o valor da opção que se deseja selecionar
		//! @see verificaSelecao()
		//! @param s valor da opção que se deseja selecionar
		void setSelecao(std::string s);

		//! @brief Esse método permite que o usuário especifique !!!
		//! @param os !!!
		void setOpcoesSelecao(std::vector<std::string> os);

		//! @brief Esse método permite que o usuário especifique !!!
		//! @param a !!!
		void setAbrir(bool a);
		
		///@}
		///@name Métodos
		///@{

		//! @brief Imprime o painel
		void printPainel();

		//! @brief Verifica se a opção passada é válida
		/*!
		 * Se o inteiro 's' estiver entre 0 (zero) e o tamanho do vector 'opcoes'.
		 * Um aviso de erro é setado na variável 'mensagem'.
		 */
		//! @param s Opção que s
		void verificaSelecao(std::string s);
		
		///@}
};

#endif // __PAINEL_H__