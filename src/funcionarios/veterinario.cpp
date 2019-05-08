#include <funcionarios/veterinario.h>

using namespace std;

Veterinario::Veterinario(){
	limpar();
}

Veterinario::Veterinario(string linhaCSV){
	
	// linhaCSV = "1;Tratador;João Alberto;007.404.200-98;45;AB;-;Répteis e Aves;;1;"
	string tmp;
	istringstream tratadorStream(linhaCSV);
	
	getline(tratadorStream, tmp, ';'); istringstream(tmp) >> id;
	getline(tratadorStream, tmp, ';');
	getline(tratadorStream, nome, ';');
	getline(tratadorStream, cpf, ';');
	getline(tratadorStream, tmp, ';'); istringstream(tmp) >> idade;
	getline(tratadorStream, tipo_sanguineo, ';');
	getline(tratadorStream, tmp, ';'); istringstream(tmp) >> fator_rh;
	getline(tratadorStream, especialidade, ';'); 
	getline(tratadorStream, crmv, ';'); 
	getline(tratadorStream, tmp, ';');
	//total++;
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
	contador_cin = 1;
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

		case 5: {
			cout << "\nINSERIR TIPO SANGUINEO [A/B/AB/O]: ";
			string ts;
			i >> ts;
			t.setTipo_sanguineo(ts);
			break;
		}
		case 6: {
			cout << "\nINSERIR FATOR RH: [+/-]: ";
			char frh;
			i >> frh;
			t.setFatorRh(frh);
			break;
		}
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


string Veterinario::getStringFormatoCSV(){

	stringstream ss;
	ss << id << ";";
	ss << "Veterinario" << ";";
	ss << nome << ";";
	ss << cpf << ";";
	ss << idade << ";";
	ss << tipo_sanguineo << ";";
	ss << fator_rh << ";";
	ss << especialidade << ";";
	ss << crmv << ";";
	ss << ";";
	ss << endl;
	return ss.str();
}

string Veterinario::getTipo(){
	return "Veterinario";
}