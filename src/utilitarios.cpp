#include <utilitarios.h>

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