#ifndef __EXCECAO_H__
#define __EXCECAO_H__

#include <exception>
#include <iostream>
#include <string>

class Excecao : public std::exception {
	private:
		std::string mensagem;

    public:
		Excecao();
		Excecao(const std::string m);

    Excecao(const Excecao &e);
    const std::string getMensagem() const;
		void setMensagem(std::string m);
		void limparMensagem();
		void printMensagem();
		Excecao& operator= (Excecao const &e);
};

template <typename CLASSE>
std::istream& tipoInvalido(std::istream &i, CLASSE classe, Excecao &e){	
	while(i.fail()){
		i.clear();
		i.ignore(__INT_MAX__, '\n');
		e.setMensagem("Valor inválido. Insira um valor númerico.");
	//	p.printPainel();
		i >> classe;
	}
	return i;
}


#endif // __EXCECAO_H__