#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <funcionario.h>
#include <tratador.h>
#include <veterinario.h>
#include <utilitarios.h>

template<class C>
class PainelCadastro{
	private:
		std::vector<std::string> atributos_comuns;
		std::vector<std::string> atributos_especificos;
		std::map<std::string, std::string> atributos;
		C classe;

	public:
		PainelCadastro(std::vector<std::string> ac);
		printPainelCadastro(std::deque<string> caminho);
		inserirAtributos(C c);
		inserirAtributosEspecificos(C c);
};

template<>
PainelCadastro<Tratador>::PainelCadastro(std::vector<std::string> ac){
	atributos_comuns = ac; //{"Nome", "CPF", "Idade", "Tipo sanguíneo", "Fator RH", "Especialidade"}
	atributos_especificos = {"Nível de segurança"};
}

template<>
PainelCadastro<Veterinario>::PainelCadastro(std::vector<std::string> ac){
	atributos_comuns = ac; //{"Nome", "CPF", "Idade", "Tipo sanguíneo", "Fator RH", "Especialidade"}
	atributos_especificos = {"CRMV"};
}


/*

template<typename F>
void painelCadastro(std::deque<string> caminho){

	F funcionario;

	// vector<string> = {"Nome", "CPF", "Idade"}
	// usar um map<string, string>

	// fazer do msm jeito de painel while(){ if(cont == 1) }


	std::string titulo = "CADASTRAR " + caminho[2]; 
	printCabecalho(titulo, caminho)
	
	cout << "\tNome: " << nome << endl;
	cout << "\tCPF: " << cpf << endl;
	cout << "\tIdade: " << idade << endl;
	cout << "\tTipo sanguíneo: " << tipo_sanguineo << endl;
	cout << "\tFator RH: " << fator_rh << endl;
	cout << "\tEspecialidade: " << especialidade << endl;
	

	cadastroFuncionario(funcionario);
}

void cadastroFuncionario(Tratador t){
	int nivel_de_seguranca;
	cout << "\tNível de segurança: " << nivel_de_seguranca << endl;

	t.setNivelDeSeguranca(nivel_de_seguranca);
}

void cadastroFuncionario(Veterinario v){
	string crmv;
	cout << "\tCRMV: " << crmv << endl;

	v.setCRMV(crmv);
}

*/