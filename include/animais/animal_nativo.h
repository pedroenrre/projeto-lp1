#ifndef __ANIMAL_NATIVO_H__
#define __ANIMAL_NATIVO_H__

#include <string>
#include <animal_silvestre.h>

/// Classe AnimalNativo
/**
 * AnimalNativo é a classe onde se registra as permissões para manutenção e o
 * uso dos animais nativos da fauna brasileira, além do estado brasileiro de
 * origem desses animais.
 */
class AnimalNativo : public AnimalSilvestre {
	public:
		/// Construtor de AnimalNativo sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AnimalNativo();
		/// Destrutor de AnimalNativo.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnimalNativo();

	protected:
		std::string uf_origem; ///< Estado de origem
		std::string autorizacao; ///< Autorização do IBAMA
		
};

#endif // __ANIMAL_NATIVO_H__