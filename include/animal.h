#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

/*!
 * \brief Animal class
 * 
 * A more elaborate class description.
 */
class Animal{
	public:
		/*! \brief A constructor.
		*
		*  Detailed description starts here.
		*/
		Animal();
		Animal(int id);
		/*! \brief A destructor.
		*
		*  A more elaborate description of the destructor.
		*/
		~Animal();

	protected:
		int id; ///< Brief description after the member
		std::string classe;
		std::string nome_cientifico;
		char sexo;
		double tamanho;
		std::string dieta;
		//Veterinario veterinario;
		//Tratador tratador;
		std::string nome_batismo;

};

#endif // __ANIMAL_H__