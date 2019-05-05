#ifndef __VETERINARIO_H__
#define __VETERINARIO_H__

#include <funcionarios/funcionario.h>

/// Essa classe representa o funcionario que possui um 'código CRMV'.
class Veterinario : public Funcionario {
	private:
		std::string crmv; ///< Código CRMV

	public:
		///@name Construtores e destrutor
		///@{

		//! @brief Construtor padrão seta os valores nulos da função limpar()
		//! @see limpar()
		Veterinario();

		///@}
		///@name Métodos getters
		///@{

		//! @brief Retorna o código CRMV do veterinário.
		std::string getCRMV();

		///@}
		///@name Métodos setters
		///@{

		//! @brief Esse método permite que o usuário especifique o código CRMV do veterinário
		//! @param c código CRMV do veterinário
		void setCRMV(std::string c);
	
		///@}
		///@name Métodos
		///@{
	
		//! @brief Seta 'espaço' em todos os atributos do tipo string e '-1' em todos os de tipo numérico
		//! @note Ajuda na hora de imprimir a classe na tela, mesmo que não tenha todos os atributos já definidos.
		//! @see operator<<()
		void limpar();
	
		//! @brief Operador de inserção da classe. Só insere um atributo por vez.
		/**
		 * Por exemplo:
		 * @code
		 * Veterinario v;
		 * cin >> v;	// 1a chamada: Insere no v.id
		 * cin >> v;	// 2a chamada: Insere no v.nome
		 * cin >> v;	// 3a chamada: Insere no v.cpf
		 * cin >> v;	// 4a chamada: Insere no v.idade
		 * cin >> v;	// ...
		 * cin >> v;	// 8a chamada: Insere no v.crmv
		 * @endcode
		 * @see setContadorCin()
		 */
		friend std::istream& operator>> (std::istream &i, Veterinario &v);

		//! @brief Operador de extração da classe.
		friend std::ostream& operator<< (std::ostream &o, Veterinario const v);

		//! @brief Grava no arquivo CSV informado, 'todos os valores da classe'
		//! @exception "Erro ao abrir arquivo para cadastro." caso o arquivo não exista ou haja alguma falha de execução
		//! @param enderecoArquivo endereco do arquivo CSV
		void inserirCSV(std::string enderecoArquivo);

		///@}
};

#endif // __VETERINARIO_H__