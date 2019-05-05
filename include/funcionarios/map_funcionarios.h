#ifndef __MAP_FUNCIONARIOS_H__
#define __MAP_FUNCIONARIOS_H__

#include <map>
#include <fstream>

#include "funcionarios/veterinario.h"
#include "funcionarios/tratador.h"

/// Essa classe representa o funcionario que possui um 'nivel de segurança' para tratar os animais.
/**
 * Nível de segurança representa o grau de experiência do tratador na manipulação de certos animais.
 */
class MapFuncionarios {
	private:
		std::map<int, Tratador> tratadores; ///< Lista de tratadores
		std::map<int, Veterinario> veterinarios; ///< Lista de veterinarios

	public:
		///@name Construtores e destrutor
		///@{
		
		//! @brief Construtor padrão não inicializa nenhum dos atributos
		MapFuncionarios();

		//! @brief Esse construtor instancia a lista de funcionarios a partir do arquivo CSV informado
		//! @param linhaCSV endereço do arquivo CSV
		MapFuncionarios(std::string enderecoArquivoCSV);
		
		///@}
		///@name Getters
		///@{
        
        //! Retorna o tipo do funcionario de acordo com a linha do arquivo CSV
		//! @param linhaCSV endereço do arquivo CSV
        std::string getTipoFuncionario(std::string linhaCSV);
		
		///@}
		///@name Métodos
		///@{
		
		
		///@}
};

#endif // __MAP_FUNCIONARIOS_H__