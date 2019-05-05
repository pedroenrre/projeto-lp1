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
		/// Construtor de Animal com parâmetros.
		/**
		*  Detailed description starts here.
		*/
		Animal(int cod, std::string clas);
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
		///@name Getters
		///@{
		//! @brief Médotos para acessar atributos protegidos.
		
		//! @brief Médoto para pegar o atributo protegido id
		int Animal::getId();
		//! @brief Médoto para pegar o atributo protegido classe
		std::string Animal::getClasse();
		//! @brief Médoto para pegar o atributo protegido nome_cientifico
		std::string Animal::getNome_Cientifico();
		//! @brief Médoto para pegar o atributo protegido sexo
		char Animal::getSexo();
		//! @brief Médoto para pegar o atributo protegido tamanho
		double Animal::getTamanho();
		//! @brief Médoto para pegar o atributo protegido dieta
		std::string Animal::getDieta();
		//! @brief Médoto para pegar o atributo protegido veterinario
		Veterinario Animal::getVeterinario();
		//! @brief Médoto para pegar o atributo protegido tratador
		Tratador Animal::getTratador();
		//! @brief Médoto para pegar o atributo protegido nome_batismo
		std::string Animal::getNome_Batismo();
		
		
		///@}
		
		///@name Setters
		///@{
		//! @brief Médotos para acessar atributos protegidos.
		
		//! @brief Médoto para setar o atributo protegido id
		//! @param id identificador do Animal
		void Animal::setId(int id);
		//! @brief Médoto para setar o atributo protegido class
		//! @param clas classe do Animal
		void Animal::setClasse(std::string clas);
		//! @brief Médoto para setar o atributo protegido nome_cientifico
		//! @param cientific_name nome científico do Animal
		void Animal::setNome_Cientifico(std::string cientific_name);
		//! @brief Médoto para setar o atributo protegido sexo
		//! @param gender sexo do Animal
		void Animal::setSexo(char gender);
		//! @brief Médoto para setar o atributo protegido tamanho
		//! @param size tamanho do Animal
		void Animal::setTamanho(double size);
		//! @brief Médoto para setar o atributo protegido dieta
		//! @param diet diete do Animal
		void Animal::setDieta(std::string diet);
		//! @brief Médoto para setar o atributo protegido veterinario
		//! @param vet veterinario do Animal
		void Animal::setVeterinario(Veterinario vet);
		//! @brief Médoto para setar o atributo protegido tratador
		//! @param caregiver tratador do Animal
		void Animal::setTratador(Tratador caregiver);
		//! @brief Médoto para setar o atributo protegido nome_batismo
		//! @param baptismo_name nome de batismo do Animal
		void Animal::setNome_Batismo(std::string baptism_name);
		
		///@}
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