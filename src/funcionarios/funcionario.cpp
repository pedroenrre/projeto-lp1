#include <funcionarios/funcionario.h>

Funcionario::Funcionario(){}

int Funcionario::getContadorCin(){
	return contador_cin;
}

void Funcionario::setContadorCin(int c){
	contador_cin = c;
}