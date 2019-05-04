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
};

#endif // __EXCECAO_H__