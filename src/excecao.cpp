#include "excecao.h"

using namespace std;


Excecao::Excecao(){
	mensagem.erase();
}

Excecao::Excecao(string m) : mensagem(m){}

Excecao::Excecao(const Excecao &e){
	mensagem = e.getMensagem();
}

const string Excecao::getMensagem() const {	
	return mensagem;
}

void Excecao::setMensagem(string m){
	mensagem = m;
}

void Excecao::limparMensagem(){
	mensagem.erase();
}

void Excecao::printMensagem(){
	if(!mensagem.empty())
		cout << endl << mensagem << endl;
}

Excecao& Excecao::operator= (Excecao const &e) {
 mensagem = e.mensagem;
 return *this;
}