#ifndef __TRATADOR_H__
#define __TRATADOR_H__

#include <funcionario.h>
#include <string>

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
	public:
		/// Construtor de Tratador sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		Tratador();
		/// Destrutor de Tratador.
		/**
		*  A more elaborate description of the destructor.
		*/
		~Tratador();

	private:
		int nivel_de_seguranca; ///< Indica quais animais o tratador pode tratar.
								/**<
								 * O nivel de segurança é um inteiro[0, 2], onde:
								 *  - 0 indica que pode manipular aves
								 *  - 1 indica que pode tratar aves, mamíferos e répteis
								 *  - 2 pode manipular animais venenosos ou perigosos
								 */
		
};

#endif // __TRATADOR_H__