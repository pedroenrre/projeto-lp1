#include <funcionarios/funcionario.h>

using namespace std;

int Funcionario::getId(){
	return id;
}

void Funcionario::setId(int i){
	id = i;
}

string Funcionario::getNome(){
	return nome;
}

int Funcionario::getContadorCin(){
	return contador_cin;
}

void Funcionario::setContadorCin(int c){
	contador_cin = c;
}

void Funcionario::setTipo_sanguineo(string ts){
	if(ts != "A" && ts != "B" && ts != "AB" && ts != "O")
		throw Excecao("Tipo sanguíneo inválido.");
	else
		tipo_sanguineo = ts;
}

void Funcionario::setFatorRh(char frh){
	if(frh != '+' && frh != '-')
		throw Excecao("Fator RH inválido.");
	else
		fator_rh = frh;	
}

void Funcionario::printIdNome(){
	cout << "\t" << id;
    cout << ". " << nome << endl;
}
