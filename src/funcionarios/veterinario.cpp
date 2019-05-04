#include <funcionarios/veterinario.h>

using namespace std;

Veterinario::Veterinario(){
	limpar();
}

void Veterinario::limpar(){
	id = -1;
	nome = "";
	cpf = "";
	idade = -1;
	tipo_sanguineo = ' ';
	fator_rh = ' ';
	especialidade = ' ';
	crmv = "";
	contador_cin = 0;
}

istream& operator>> (istream &i, Veterinario &t) {
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
			cout << "\nINSERIR CRMV: ";
			i >> t.crmv;
			break;
			
		default:
			t.setContadorCin(-1); 
			break;
	}

	return i;
	
}

ostream& operator<< (ostream &o, Veterinario const t) {
	o << "\tId: " << (t.id != -1 ? intParaString(t.id) : "") << endl;
	o << "\tNome: " << t.nome << endl;
	o << "\tCPF: " << t.cpf << endl;
	o << "\tIdade: " << (t.idade != -1 ? intParaString(t.idade) : "") << endl;
	o << "\tTipo sanguíneo: " << t.tipo_sanguineo << endl;
	o << "\tFator RH: " << t.fator_rh << endl;
	o << "\tEspecialidade: " << t.especialidade << endl;
	o << "\tCRMV: " << t.crmv << endl;
	return o;
}


bool Veterinario::inserirCSV(string enderecoArquivo){
	ofstream of;
	of.open(enderecoArquivo, ios::app);
	
	of << id << ";";
	of << "Veterinário" << ";";
	of << nome << ";";
	of << cpf << ";";
	of << idade << ";";
	of << tipo_sanguineo << ";";
	of << fator_rh << ";";
	of << especialidade << ";";
	of << crmv << ";";
	of << ";";
	of << endl;
	return true;
}