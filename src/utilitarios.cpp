#include <utilitarios.h>

using namespace std;

string intParaString(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}

map<string, string> vectorParaMap(vector<string> o){
	
	map<string, string> corpo;
	pair<string, string> par;

	for (int i = 1; i < o.size(); ++i){
		string indice = intParaString(i);
		par.first = indice;
		par.second = o[i];
		corpo.insert(par);
	}

	par.first = "0";
	par.second = o[0];
	corpo.insert(par);

	return corpo;
}