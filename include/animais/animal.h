#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>
#include <veterinario.h>
#include <tratador.h>

/// Classe Animal
/** 
 * Conjunto de atributos comuns a todos os animais da Pet Fera.
 */
class Animal{
	public:
		/// Construtor de Animal sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		Animal();
		/// Destrutor de Animal.
		/**
		*  A more elaborate description of the destructor.
		*/
		~Animal();

	protected:
		int id; ///< Identificador do animal
		std::string classe; ///< Classe do animal
							/**< 
							 * String, onde é uma das seguintes: 
							 *  - *Amphibia* (anfíbio)
							 *  - *Reptilia* (réptil)
							 *  - *Aves* (ave)
							 *  - *Mammalia* (mamífero)
							 */
		std::string nome_cientifico; ///< Nome científico do animal
		char sexo; ///< Classe do animal
				   /**<
					* Caractere, onde é um dos seguintes:
					*  - M (macho)
					*  - F (fêmea)
				    */
		double tamanho; ///< Tamanho médio em metros do animal
		std::string dieta; ///< Dieta predominante
		Veterinario veterinario; ///< Veterinário associado ao animal
								 /**<
								  * veterinario.getId(), onde é um dos seguintes:
								  *  - 0 (o valor zero indica que não há veterinário associado)
								  *  - maior ou igual a 1
								 */
		Tratador tratador; ///< Tratador associado ao animal
						   /**<
							* tratador.getId(), onde é um dos seguintes:
							*  - 0 (o valor zero indica que não há tratador responsável)
							*  - maior ou igual a 1
							*/
		std::string nome_batismo; ///< Nome de batismo do animal

};

#endif // __ANIMAL_H__