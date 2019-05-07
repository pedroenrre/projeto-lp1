#ifndef __OPERACOES_CSV_H__
#define __OPERACOES_CSV_H__

#include <map>
#include <fstream>
#include <iterator>

/// Essa classe representa o funcionario que possui um 'nivel de segurança' para tratar os animais.
/**
 * Nível de segurança representa o grau de experiência do tratador na manipulação de certos animais.
 */
template<class CLASSE>
class OperacoesCSV {
	private:
		std::map<int, CLASSE> lista; ///< Lista de tratadores
        std::string enderecoArquivo;

	public:
		///@name Construtores e destrutor
		///@{
		
		//! @brief Construtor padrão não inicializa nenhum dos atributos
		OperacoesCSV();

		//! @brief Esse construtor instancia a lista de funcionarios a partir do arquivo CSV informado
		//! @param linha endereço do arquivo CSV
		OperacoesCSV(std::string enderecoArquivo);
		
		///@}
		///@name Getters
		///@{
        
        //! Retorna o tipo do funcionario de acordo com a linha do arquivo CSV
		//! @param linha endereço do arquivo CSV
        std::string getTipoDaLinha(std::string linha);

        std::map<int, CLASSE> getLista();

        void inserirMap(std::map<int, CLASSE> lista);
        void inserirLinha(CLASSE classe);
		
		///@}
		///@name Métodos
		///@{
		
        void print();
		///@}
};

template <class CLASSE>
OperacoesCSV<CLASSE>::OperacoesCSV(std::string ea){

    enderecoArquivo = ea;
    std::ifstream arquivo;
    arquivo.open(enderecoArquivo);

    std::string linha;
    while (!arquivo.eof()){
        getline(arquivo, linha);

        std::string tipoLinha = getTipoDaLinha(linha);

        CLASSE tmp;
        if(tipoLinha == tmp.getTipo()){
            CLASSE c(linha);
            std::pair<int, CLASSE> par;
            par.first = c.getId();
            par.second = c;

            lista.insert(par);
        }
    }
}

template <class CLASSE>
std::string OperacoesCSV<CLASSE>::getTipoDaLinha(std::string linha){
    std::string tipo;
    std::istringstream ss(linha);
    getline(ss, tipo, ';');
    getline(ss, tipo, ';');
    return tipo;
}

template <class CLASSE>
std::map<int, CLASSE> OperacoesCSV<CLASSE>::getLista(){
   return lista;
}

template <class CLASSE>
void OperacoesCSV<CLASSE>::print(){

    for (auto it = lista.begin(); it != lista.end(); ++it){
        std::cout << "\t" << it->second.getId();
        std::cout << ". " << it->second.getNome() << std::endl;
    }
}

template <class CLASSE>
void OperacoesCSV<CLASSE>::inserirMap(std::map<int, CLASSE> lista){

    std::ofstream of;
	of.open(enderecoArquivo);
	
    if(of.is_open()){
        for (auto it = lista.begin(); it != lista.end(); ++it)
            of << it->second.getStringFormatoCSV();

	} else {
		throw Excecao("Erro ao abrir arquivo para escrita.");
	}

}

template <class CLASSE>
void OperacoesCSV<CLASSE>::inserirLinha(CLASSE classe){

    std::ofstream of;
	of.open(enderecoArquivo, std::ios::app);

	if(of.is_open()){
		of << classe.getStringFormatoCSV();
	} else {
		throw Excecao("Erro ao abrir arquivo para escrita.");
	}
    
}

#endif // __OPERACOES_CSV_H__