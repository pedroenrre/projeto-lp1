#ifndef __TRATADOR_H__
#define __TRATADOR_H__

#include <funcionarios/funcionario.h>
#include <iostream>

/// Classe Tratador
/**
 * O Tratador é um Funcionario que deve estar vinculado aos animais para cuidados diários,
 * caso tenha o nível de segurança apropriado e a espécie do animal esteja catalogada em
 * uma das listas oficiais do IBAMA.
 * 
 * As espécies catalogadas em listas oficiais do IBAMA:
 *  - **Animais silvestres nativos**: mico, morcego, quati, onça, tamanduá, ema,
 *    papagaio, arara, canário-da-terra, tico-tico, galo-da-campina, teiú, etc.
 *  - **Animais silvestres exoticos**: leão, zebra, elefante, urso, *ferret*,
 *    lebre-européia, javali, crocodilo-do-Nilo, naja, tartaruga-de orelha-vermelha,
 *    cacatua, entre outros.
 *  - **Animais ameaçadas de extinção**: araraju, arara azul, ariranha, baleia-franco-do-sul,
 *    cervo-do-pantanal, gato-macarajá, lobo-guará, macaco-aranha, mico-leão-dourado,
 *    onça-pintada, tamanduá-bandeira, etc.
 */
class Tratador : public Funcionario {
	private:
		int nivel_de_seguranca; ///< Indica quais animais o tratador pode tratar.

	public:
		///@name Construtores e destrutor
		///@{
		
		//! @brief Construtor padrão
		Tratador();
		
		///@}
		///@name Métodos getters
		///@{
		
		//! @brief Retorna o nível de segurança do tratador.
		/*!
		 * O nivel de segurança é um inteiro[0, 2], onde:
		 *  - 0 (indica que pode manipular aves)
		 *  - 1 (indica que pode tratar aves, mamíferos e répteis)
		 *  - 2 (pode manipular animais venenosos ou perigosos)
		 */
		//! @return inteiro[0, 2]
		int getNivelDeSeguranca();
		
		///@}
		///@name Métodos setters
		///@{
		
		//! @brief Esse método permite que o usuário especifique o nível de segurança do tratador
		/*!
		 * O nivel de segurança é um inteiro[0, 2], onde:
		 *  - 0 (indica que pode manipular aves)
		 *  - 1 (indica que pode tratar aves, mamíferos e répteis)
		 *  - 2 (pode manipular animais venenosos ou perigosos)
		 * Caso o 'nds' não seja um inteiro[0, 2], a função retorna -1;
		 */
		//! @param nds nível de segurança do tratador
		void setNivelDeSeguranca(int nds);
		
		///@}
		///@name Métodos setters
		///@{
		
		//! @brief Esse método permite que o usuário especifique o nível de segurança do tratador
		void limpar();
		
		friend std::istream& operator>> (std::istream &i, Tratador &t);
		friend std::ostream& operator<< (std::ostream &o, Tratador const t);
		
		///@}
};

#endif // __TRATADOR_H__