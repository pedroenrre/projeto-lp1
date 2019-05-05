#include <painel.h>

using namespace std;

void printCabecalho(string titulo, deque<string> caminho){
	system("clear");
	cout << "\nPET FERA \n";
	printCaminho(caminho);
	cout << "\n" << titulo << endl;
}

void printCaminho(deque<string> caminho){
	if(!caminho.empty()){
		cout << "\n";
		deque<string>::iterator it;
		for (it = caminho.begin(); it != caminho.end(); ++it){
			cout << *it;
			if(it != caminho.end()-1)
				cout << " >> ";
		}
		cout << "\n";
	}
}

Painel::Painel(string t, vector<string> o) : titulo(t), opcoes(o){
	abrir = true;
}

Painel::Painel(string t, vector<string> o, deque<string> c) : titulo(t), opcoes(o), caminho(c) {
	abrir = true;
}

void Painel::printPainel(){
	
	printCabecalho(titulo, caminho);

	// Lista todas as opções do vector 'opcoes'
	for (int i = 1; i < opcoes.size(); i++) 
		cout << "\t" << i << ". " << opcoes[i] << endl;
	
	// Imprime opção 0 por último
	cout << "\n\t0. " << opcoes[0] << "\n\n"; 
	
	// Se a string 'mensagem' não estiver vazia imprima-a
	if(!mensagem.empty())
		cout << getMensagem() << endl;

	cout << "SELECIONE UMA DAS OPÇÕES: ";
	string s;
	cin >> s;
	verificaSelecao(s);
}

void Painel::verificaSelecao(std::string s){

	bool ehValida = false;
	for (int i = 0; i < opcoes.size(); ++i){
		string indice = intParaString(i);
		if(s == indice)
			ehValida = true;
	}

	if(ehValida){
		if(s == "0")
			abrir = false;
		else
			setSelecao(s);
	} else {
		mensagem = "Opção inválida. Tente Novamente.\n";
	}
}

void Painel::setMensagem(string m){
	mensagem = m + "\n";
}

string Painel::getMensagem(){
	string m = mensagem;
	mensagem.erase();
	return m;
}

void Painel::setSelecao(string s){
	selecao = s;
}

string Painel::getSelecao(){
	string s = selecao;
	selecao.erase();
	return s;
}

bool Painel::getAbrir(){
	return abrir;
}

void Painel::setAbrir(bool a){
	abrir = a;
}