#ifndef __ANIMALSILVESTRE_H__
#define __ANIMALSILVESTRE_H__

#include <string>

/// Classe AnimalSilvestre
/**
 * AnimalSilvestre é a classe onde se registra as permissões para manutenção e o
 * uso das diferentes espécies.
 */
class AnimalSilvestre {
	public:
		/// Construtor de AnimalSilvestre sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AnimalSilvestre();
		/// Destrutor de AnimalSilvestre.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnimalSilvestre();

	protected:
		std::string autorizacao_ibama; ///< Autorização do IBAMA
		
};

#endif // __ANIMALSILVESTRE_H__