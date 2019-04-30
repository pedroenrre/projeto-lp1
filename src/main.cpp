/*!
 * \mainpage Pet Fera
 * \authors Bruno Wagner
 * \authors José Alex
 * \authors José Mario
 * \section intro_sec Introdução
 *  Programa de cadastro de animais para a loja de animais silvestres Pet Fera.
 * 
 * \section compile_sec Compilação
 *  Descrevemos aqui, como compilar esse código usando Make
 * \subsection Make
 *  Abra o terminal, acesse a passa raiz deste projeto e use o comando make
 * 
 * \bug
 * \warning
 * 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void painelAnimais(){
	cout << "\nPET FERA" << endl << endl;
	cout << "ANIMAIS: " << endl;
	cout << "\t1. CADASTRAR" << endl;
	cout << "\t2. REMOVER" << endl;
	cout << "\t3. ALTERAR" << endl;
	cout << "\t4. CONSULTAR" << endl;
	cout << "\t5. VOLTAR" << endl << endl;
	
}

void painelAnimaisConsulta(){
	cout << "\nPET FERA" << endl << endl;
	cout << "CONSULTAR ANIMAIS POR: " << endl;
	cout << "\t1. NOME DE BATISMO" << endl;
	cout << "\t2. ESPÉCIE" << endl;
	cout << "\t3. CLASSE" << endl;
	cout << "\t4. VETERINÁRIO RESPONSÁVEL" << endl;
	cout << "\t4. TRATADOR RESPONSÁVEL" << endl;
	cout << "\t5. VOLTAR" << endl << endl;
}

void painelFuncionarios(){
	cout << "\nPET FERA" << endl << endl;
	cout << "FUNCIONARIOS: " << endl;
	cout << "\t1. TRATADOR" << endl;
	cout << "\t2. VETERINARIO" << endl;
	cout << "\t3. VOLTAR" << endl << endl;
}


void painel(vector<string> opcoes){
	cout << "\nPET FERA" << endl << endl;
	cout << opcoes[0] << endl;

	for (int i = 1; i < opcoes.size(); i++)
		cout << "\t" << i << ". " << opcoes[i] << endl;

	cout << endl;	
}

void painel(){

	vector<string> gerenciar = {"GERENCIAR", "ANIMAIS", "FUNCIONÁRIOS"};
	vector<string> animais = {"ANIMAIS", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR", "VOLTAR"};
	vector<string> animaisConsulta = {"CONSULTAR ANIMAIS POR", "ESPÉCIE", "CLASSE", "VETERINÁRIO RESPONSÁVEL", "TRATADOR RESPONSÁVEL", "VOLTAR"};
	vector<string> funcionarios = {"FUNCIONÁRIOS", "TRATADOR", "VETERINÁRIO", "VOLTAR"};
	vector<string> funcionariosTratador = {"TRATADORES", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR", "VOLTAR"};
	vector<string> funcionariosVeterinario = {"VETERINARIOS", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR", "VOLTAR"};
	
	painel(gerenciar);
}

/// Função principal.
/** 
 * Para iniciar o programa, deve-se verificar se existem dois arquivos no formato CSV,
 * com os dados dos animais e dos funcionarios.
 * Caso existam, serão lidos. Caso contrário, serão criados na pasta csv.
 */
int main(int argc, const char* argv[]){

	painel();

	return 0;
}