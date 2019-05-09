#include <painel.h>

using namespace std;

void printCabecalho(string titulo, deque<string> caminho){
	system("clear");
	cout << endl << "PET FERA" << endl;
	printCaminho(caminho);
	cout << endl << titulo << endl;
}

void printCaminho(deque<string> caminho){
	if(!caminho.empty()){
		cout << endl;
		deque<string>::iterator it;
		for (it = caminho.begin(); it != caminho.end(); ++it){
			cout << *it;
			if(it != caminho.end()-1)
				cout << " >> ";
		}
		cout << endl;
	}
}

Painel::Painel(string t, deque<string> c) : titulo(t), caminho(c), abrir(true){ }

Painel::Painel(string t, vector<string> o) : titulo(t), corpo(vectorParaMap(o)), abrir(true){ }

Painel::Painel(string t, vector<string> o, deque<string> c) : titulo(t), corpo(vectorParaMap(o)), caminho(c), abrir(true) { }

Painel::Painel(string t, map<string, string> co) : titulo(t), corpo(co), abrir(true){ }

Painel::Painel(string t, map<string, string> co, deque<string> c) : titulo(t), corpo(co), caminho(c), abrir(true){ }

void Painel::printPainel(){
	
	system("clear");
	cout << endl << "PET FERA" << endl;
	printCaminho(caminho);

	excecao.printMensagem();
	excecao.limparMensagem();

	// Se a string 'mensagem' não estiver vazia imprima-a
	if(!mensagem.empty())
		cout << getMensagem() << endl;

	cout << endl << titulo << endl;

	// Imprime o corpo
	if(!corpo.empty()){
        typename std::map<string, string>::iterator it;
		for (it = ++corpo.begin(); it != corpo.end(); ++it){

			std::cout << "\t" << it->first;
			std::cout << ". " << it->second << std::endl;
		}
		
		it = corpo.begin();
		std::cout << "\n\t" << it->first;
		std::cout << ". " << it->second << std::endl;
	}
	
	if(!pergunta.empty()){
		cout << endl << pergunta << ": ";
		string s;
		cin >> s;
		verificaSelecao(s);
	}

}

void Painel::verificaSelecao(std::string s){
    typename std::map<string, string>::iterator it;
	it = corpo.find(s);

    if(it == corpo.end()){
        throw Excecao("Opção inválida. Tente Novamente."); 
    } else if(s == "0") {
		abrir = false;
	} else {
		setSelecao(s);
	}
	
}

void Painel::setMensagem(string m){
	mensagem = "\n" + m;
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

void Painel::setPergunta(string p){
	pergunta = p;
}

void Painel::setExcecao(Excecao &e){
	excecao = e;
}