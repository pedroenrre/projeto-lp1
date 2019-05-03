#include <funcionarios/tratador.h>

using namespace std;

Tratador::Tratador(){
	limpar();
}

void Tratador::limpar(){
	id = -1;
	nome = "";
	cpf = "";
	idade = -1;
	tipo_sanguineo = ' ';
	fator_rh = ' ';
	especialidade = ' ';
	nivel_de_seguranca = -1;
	contador_cin = 0;
}

istream& operator>> (istream &i, Tratador &t) {
	t.contador_cin++;
	switch (t.getContadorCin()){
		case 1:
			cout << "\nINSERIR ID: ";
			i >> t.id;
			break;

		case 2:
			cout << "\nINSERIR NOME: ";
			i >> t.nome;
			break;

		case 3:
			cout << "\nINSERIR CPF: ";
			i >> t.cpf;
			break;

		case 4:
			cout << "\nINSERIR IDADE: ";
			i >> t.idade;
			break;

		case 5:
			cout << "\nINSERIR TIPO SANGUINEO: ";
			i >> t.tipo_sanguineo;
			break;

		case 6:
			cout << "\nINSERIR FATOR RH: ";
			i >> t.fator_rh;
			break;

		case 7:
			cout << "\nINSERIR ESPECIALIDADE: ";
			i >> t.especialidade;
			break;

		case 8:
			cout << "\nINSERIR NIVEL DE SEGURANCA: ";
			i >> t.nivel_de_seguranca;
			break;
			
		default:
			t.setContadorCin(-1); 
			break;
	}

	return i;
	
}

ostream& operator<< (ostream &o, Tratador const t) {
	o << "\tId: " << (t.id != -1 ? intParaString(t.id) : "") << endl;
	o << "\tNome: " << t.nome << endl;
	o << "\tCPF: " << t.cpf << endl;
	o << "\tIdade: " << (t.idade != -1 ? intParaString(t.idade) : "") << endl;
	o << "\tTipo sanguíneo: " << t.tipo_sanguineo << endl;
	o << "\tFator RH: " << t.fator_rh << endl;
	o << "\tEspecialidade: " << t.especialidade << endl;
	o << "\tNível de segurança: " << (t.nivel_de_seguranca != -1 ? intParaString(t.nivel_de_seguranca) : "") << endl;
	return o;
}