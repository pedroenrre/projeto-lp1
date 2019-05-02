#ifndef __VETERINARIO_H__
#define __VETERINARIO_H__

#include <funcionario.h>

/// Classe Veterionario
/**
 * O Veterionario é um Funcionario inscrito no Conselho Regional de Medicina Veterinária
 * sob um código de CRMV que deve estar vinculado aos animais para cuidados diários, caso
 * a espécie do animal esteja catalogada em uma das listas oficiais do IBAMA.
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
class Veterinario : public Funcionario {
	private:
		std::string crmv; ///< Código CRMV

	public:
		///@name Construtores e destrutor
		///@{
		
		//! @brief Construtor padrão
		Veterinario();
		
		///@}
		///@name Métodos getters
		///@{
		
		//! @brief Retorna o código CRMV do veterinário.
		std::string getCRMV();
		
		///@}
		///@name Métodos setters
		///@{
		
		//! @brief Esse método permite que o usuário especifique o código CRMV do veterinário
		//! @param c código CRMV do veterinário
		void setCRMV(std::string c);
		
		///@}

};

#endif // __VETERINARIO_H__