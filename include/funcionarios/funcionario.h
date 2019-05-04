#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__

#include <iostream>
#include <fstream>
#include <string>
#include "utilitarios.h"

/// Classe Funcionario
/** 
 * Conjunto de atributos comuns a todos os funcionarios da Pet Fera.
 */
class Funcionario{
	protected:
		int id; ///< Identificador do funcionário
		std::string nome; ///< Nome do funcionário
		std::string cpf; ///< CPF do funcionário
		short idade; ///< Idade do funcionário
		char tipo_sanguineo; ///< Tipo sanguíneo é uma cadeia de caracteres
		char fator_rh; ///< Fator RH do funcionario
		std::string especialidade; ///< Especialidade do funcionário
		int contador_cin;

	public:
		///@name Contrutores e destrutor
		///@{
 
		//! @brief Construtor de Funcionario com título e vector de opções.
		//! @param t Título do painel
		//! @param o Vector de opções
		Funcionario();
		
		// Destrutor de Funcionario
		//~Funcionario();

		///@}
		///@name Métodos getters
		///@{
 
		//! @brief Retorna o identificador do funcionário
		int getId();

		//! @brief Retorna o nome do funcionário
		std::string getNome();

		//! @brief Retorna o CPF do funcionário
		std::string getCpf();

		//! @brief Retorna a idade do funcionário
		short getIdade();

		//! @brief Retorna o tipo sanguíneo é uma cadeia de caracteres
		char getTipo_sanguineo();

		//! @brief Retorna o tipo sanguíneo do funcionario
		char getFator_rh();

		//! @brief Retorna a especialidade do funcionário
		std::string getEspecialidade();

		int getContadorCin();
		
		///@}
		///@name Métodos setters
		///@{

		//! @brief Esse método permite que o usuário especifique o identificador do funcionário
		//! @param i identificador do funcionário
		void setId(int i);

		//! @brief Esse método permite que o usuário especifique o nome do funcionário
		//! @param n nome do funcionário
		void setNome(std::string n);

		//! @brief Esse método permite que o usuário especifique o CPF do funcionário
		//! @param c CPF do funcionário
		void setCpf(std::string c);

		//! @brief Esse método permite que o usuário especifique a idade do funcionário
		//! @param i idade do funcionário
		void setIdade(short i);

		//! @brief Esse método permite que o usuário especifique o tipo sanguíneo do funcionário.
		/*! 
		 * 'ts' é do tipo char, onde é um dos seguintes:
		 *  - +
		 *  - -
		 */
		//! @param ts tipo sanguíneo do funcionário
		void setTipo_sanguineo(char ts);

		//! @brief Esse método permite que o usuário especifique o fator RH do funcionário
		/*! 
		 * 'frh' é do tipo char, onde é um dos seguintes: 
		 *  - A
		 *  - B
		 *  - AB
		 *  - O 
		 */
		//! @param frh fator RH do funcionário
		void setFatorRh(char frh);

		//! @brief Esse método permite que o usuário especifique o especialidade do funcionário
		//! @param e especialidade do funcionário
		void setEspecialidade(std::string e);

		void setContadorCin(int c);

		///@}

		virtual void limpar() = 0;
		virtual bool inserirCSV(std::string enderecoArquivo) = 0;

};

#endif // __FUNCIONARIO_H__