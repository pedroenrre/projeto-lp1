#include <painel.h>

using namespace std;

Painel::Painel(string t, vector<string> o) : titulo(t), opcoes(o){}

Painel::Painel(string t, vector<string> o, deque<string> c) : titulo(t), opcoes(o), caminho(c) {}

void Painel::printPainel(){
	system("clear");

	cout << "\nPET FERA "<< getSelecao() << "\n";
	
	printCaminho(); // Imprime o caminho
	
	cout << "\n" << titulo << endl; // Imprime o título

	for (int i = 1; i < opcoes.size(); i++) // Lista as opções
		cout << "\t" << i << ". " << opcoes[i] << endl;

	cout << "\n\t0. " << opcoes[0] << "\n\n"; // Imprime opção 0 por último
	
	if(!mensagem.empty())
		cout << getMensagem() << endl;

	cout << "SELECIONE UMA DAS OPÇÕES: ";
	int s;
	cin >> s;
	verificaSelecao(s);
}

void Painel::printCaminho(){

	if(!caminho.empty()){
		cout << "\n";
		deque<string> :: iterator it;
		for (it = caminho.begin(); it != caminho.end(); ++it){
			cout << *it;
			if(it != caminho.end()-1)
				cout << " >> ";
		}
		cout << "\n";
	}
}

void Painel::verificaSelecao(int s){
	setSelecao(s);
	if((s < 0) || (s > opcoes.size()-1))
		mensagem = "Opção inválida. Tente Novamente.\n";
	//else if(s == 0)
	//	caminho.pop_back();
}

void Painel::setMensagem(string m){
	mensagem = m + "\n";
}

string Painel::getMensagem(){
	string m = mensagem;
	mensagem.erase();
	return m;
}

void Painel::setSelecao(int s){
	selecao = s;
}

int Painel::getSelecao(){
	return selecao;
}

/*
void Painel::setAbrir(bool a){
	abrir = a;
}
bool Painel::getAbrir(){
	return abrir;
}
*/