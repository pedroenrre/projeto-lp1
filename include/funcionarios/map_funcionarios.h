#ifndef __MAP_FUNCIONARIOS_H__
#define __MAP_FUNCIONARIOS_H__

#include <map>
#include <fstream>
#include <iterator>

#include "funcionarios/veterinario.h"
#include "funcionarios/tratador.h"

/// Essa classe representa o funcionario que possui um 'nivel de segurança' para tratar os animais.
/**
 * Nível de segurança representa o grau de experiência do tratador na manipulação de certos animais.
 */
template<class FUNCIONARIO>
class MapFuncionarios {
	private:
		std::map<int, FUNCIONARIO> funcionarios; ///< Lista de tratadores

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
        std::string getTipoDaLinha(std::string linhaCSV);
		
		///@}
		///@name Métodos
		///@{
		
        void print();
		///@}
};

template <class FUNCIONARIO>
MapFuncionarios<FUNCIONARIO>::MapFuncionarios(std::string enderecoArquivoCSV){

    std::ifstream arquivoFuncionarios;
    arquivoFuncionarios.open(enderecoArquivoCSV);

    std::string linha;
    while (!arquivoFuncionarios.eof()){
        getline(arquivoFuncionarios, linha);

        std::string tipoLinha = getTipoDaLinha(linha);

        FUNCIONARIO a;
        if(tipoLinha == a.getTipo()){
            FUNCIONARIO t(linha);
            std::pair<int, FUNCIONARIO> par;
            par.first = t.getId();
            par.second = t;

            funcionarios.insert(par);
        }
    }
}

template <class FUNCIONARIO>
std::string MapFuncionarios<FUNCIONARIO>::getTipoDaLinha(std::string linhaCSV){
    std::string tipoFuncionario;
    std::istringstream ss(linhaCSV);
    getline(ss, tipoFuncionario, ';');
    getline(ss, tipoFuncionario, ';');
    return tipoFuncionario;
}

template <class FUNCIONARIO>
void MapFuncionarios<FUNCIONARIO>::print(){


    for (auto it = funcionarios.begin(); it != funcionarios.end(); ++it){
        std::cout << "\t" << it->second.getId();
        std::cout << " " << it->second.getNome() << std::endl;
    }
}

#endif // __MAP_FUNCIONARIOS_H__