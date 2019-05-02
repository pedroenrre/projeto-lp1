#ifndef __ANIMAL_EXOTICO_H__
#define __ANIMAL_EXOTICO_H__

#include <string>
#include <animal_silvestre.h>

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

#endif // __ANIMAL_EXOTICO_H__