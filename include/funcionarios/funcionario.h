#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "excecao.h"
#include "utilitarios.h"

/// Classe abstrata que possui o conjunto de atributos comuns a todos os funcionarios da Pet Fera.
class Funcionario{
	protected:
		int id; ///< Identificador do funcionário
		std::string nome; ///< Nome do funcionário
		std::string cpf; ///< CPF do funcionário
		short idade; ///< Idade do funcionário
		std::string tipo_sanguineo; ///< Tipo sanguíneo do funcionário
		char fator_rh; ///< Fator RH do funcionario
		std::string especialidade; ///< Especialidade do funcionário
		int contador_cin; ///< Contador de chamadas do operador de inserção

	public:
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

		//! @brief Retorna o tipo sanguíneo do funcionário
		std::string getTipo_sanguineo();

		//! @brief Retorna o Fator RH do funcionário
		char getFator_rh();

		//! @brief Retorna a especialidade do funcionário
		std::string getEspecialidade();

		//! @brief Retorna a quantidade de chamadas do operador de inserção da classe
		//! @noe Útil para saber quais atributos já foram definidos ou não
		int getContadorCin();
		
		///@}
		///@name Métodos setters
		///@{

		//! @brief Seta o 'identificador do funcionário'
		//! @param i identificador do funcionário
		void setId(int i);

		//! @brief Seta o 'nome do funcionário'
		//! @param n nome do funcionário
		void setNome(std::string n);

		//! @brief Seta o 'CPF do funcionário'
		//! @param c CPF do funcionário
		void setCpf(std::string c);

		//! @brief Seta a 'idade do funcionário'
		//! @param i idade do funcionário
		void setIdade(short i);

		//! @brief Seta o 'tipo sanguíneo do funcionário'.
		/*! 
		 * 'ts' é do tipo char, onde é um dos seguintes:
		 *  - +
		 *  - -
		 */
		//! @exception "Fator RH inválido." caso não seja uma das anteriores.
		//! @param ts tipo sanguíneo do funcionário
		void setTipo_sanguineo(std::string ts);

		//! @brief Seta o 'fator RH do funcionário'
		/*! 
		 * 'frh' é do tipo string, onde é um dos seguintes: 
		 *  - A
		 *  - B
		 *  - AB
		 *  - O 
		 */
		//! @exception "Tipo sanguíneo inválido." caso não seja uma das anteriores.
		//! @param frh fator RH do funcionário
		void setFatorRh(char frh);

		//! @brief Seta a 'especialidade do funcionário'
		//! @param e especialidade do funcionário
		void setEspecialidade(std::string e);

		//! @brief Seta um 'valor' no contador de chamadas do operador de inserção da classe
		//! @param c valor
		void setContadorCin(int c);

		///@}
		///@name Métodos
		///@{

		//! @brief Seta 'espaço em branco' em todos os atributos do tipo string e '-1' em todos os de tipo numérico
		virtual void limpar() = 0;

		void printIdNome();

		//! @brief Grava no arquivo CSV informado, 'todos os valores da classe'
		//! @exception "Erro ao abrir arquivo para cadastro." caso o arquivo não exista ou haja alguma falha de execução
		//! @param enderecoArquivo endereco do arquivo CSV
		virtual void inserirCSV(std::string enderecoArquivo) = 0;

		///@}
		
};

#endif // __FUNCIONARIO_H__