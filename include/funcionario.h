#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__

#include <string>

/// Classe Funcionario
/** 
 * Conjunto de atributos comuns a todos os funcionarios da Pet Fera.
 */
class Funcionario{
	public:

	protected:
		int id; ///< Identificador do funcionário
		std::string nome; ///< Nome do funcionário
		std::string cpf; ///< CPF do funcionário
		short idade; ///< Idade do funcionário
		short tipo_sanguineo; ///< Tipo sanguíneo é uma cadeia de caracteres
							  /**< 
							   * Onde é um dos: 
							   *  - A
							   *  - B
							   *  - AB
							   *  - O 
							   */
		char fator_rh; ///< Tipo sanguíneo do funcionario
					   /**< 
						* Char, onde é um dos seguintes:
						*  - '+'
						*  - '-'
						*/
		std::string especialidade; ///< Especialidade do funcionário

};

#endif // __FUNCIONARIO_H__