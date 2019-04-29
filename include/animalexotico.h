#ifndef __ANIMALEXOTICO_H__
#define __ANIMALEXOTICO_H__

#include <string>
#include <animalsilvestre.h>

/// Classe AnimalExotico
/**
 * AnimalNativo é a classe onde se registra o páís de origem de animais exóticos
 * que entraram em território brasileiro espontaneamente, além das permissões para
 * manutenção e o uso desses animais.
 */
class AnimalExotico : public AnimalSilvestre {
	public:
		/// Construtor de AnimalExotico sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AnimalExotico();
		/// Destrutor de AnimalExotico.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnimalExotico();

	protected:
		std::string pais_origem; ///< País de origem
		std::string autorizacao; ///< Autorização do IBAMA
		
};

#endif // __ANIMALEXOTICO_H__