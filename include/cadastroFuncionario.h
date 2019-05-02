#include <funcionario.h>
#include <tratador.h>
#include <veterinario.h>
#include <iostream>
#include <string>

using namespace std;

template<typename F>
void painelCadastro(F funcionario){

	cout << "Nome: ";
	string nome;
	cin >> nome;
	funcionario.nome = nome;

	cadastroFuncionario(funcionario);
}

void cadastroFuncionario(Tratador t){
	int nivel;
	cin >> nivel;
	t.nivel_de_seguranca = nivel;
}

void cadastroFuncionario(Veterinario v){
	string m_crmv;
	cin >> m_crmv;
	v.m_crmv = m_crmv;
}