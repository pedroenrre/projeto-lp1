#include <utilitarios.h>

using namespace std;

std::string intParaString(int i){
	std::stringstream ss;
	ss << i;
	return ss.str();
}
