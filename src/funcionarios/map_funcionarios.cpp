#include "funcionarios/map_funcionarios.h"

using namespace std;

MapFuncionarios::MapFuncionarios(string enderecoArquivoCSV){

    ifstream arquivoFuncionarios;
    arquivoFuncionarios.open(enderecoArquivoCSV);

    string linha;
    while (!arquivoFuncionarios.eof()){
        getline(arquivoFuncionarios, linha);

        string tipo = getTipoFuncionario(linha);
        if(tipo == "Tratador"){
            Tratador t(linha);
            pair<int, Tratador> par;
            par.first = t.getId();
            par.second = t;

            tratadores.insert(par);

        } else if(tipo == "Veterinario"){
            Veterinario v(linha);
            pair<int, Veterinario> par;
            par.first = v.getId();
            par.second = v;

            veterinarios.insert(par); 
        }
    }
}

string MapFuncionarios::getTipoFuncionario(string linhaCSV){
    string tipoFuncionario;
    istringstream ss(linhaCSV);
    getline(ss, tipoFuncionario, ';');
    getline(ss, tipoFuncionario, ';');
    return tipoFuncionario;
}