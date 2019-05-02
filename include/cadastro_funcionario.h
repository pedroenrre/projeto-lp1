#include <iostream>
#include <string>

#include <funcionario.h>
#include <tratador.h>
#include <veterinario.h>
#include <utilitarios.h>

using namespace std;

template<typename F>
void painelCadastro(std::deque<string> caminho){

	F funcionario;

	std::string nome; 
	std::string cpf;
	short idade;
	char tipo_sanguineo;
	char fator_rh;
	std::string especialidade;

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
	int nivel;
	
	cin >> nivel;
	t.setNivelDeSeguranca(nivel);
}

void cadastroFuncionario(Veterinario v){
	string crmv;
	cin >> crmv;
	v.setCRMV(crmv);
}