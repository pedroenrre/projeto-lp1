#include <paineis.h>

using namespace std;

void painelPrincipal(){
	deque<string> caminho;
	caminho.push_back("GERENCIAR");
	string titulo = "GERENCIAR";
	string vetor_opcoes[] = {"SAIR", "ANIMAIS", "FUNCIONÁRIOS"};
	vector<string> opcoes(vetor_opcoes, vetor_opcoes + sizeof(vetor_opcoes) / sizeof(string));
	Painel gerenciar(titulo, opcoes);

	while(gerenciar.getAbrir()){
		gerenciar.printPainel();
		string opcao = gerenciar.getSelecao();

		if(opcao == "1"){
			painelAnimais(caminho);
		} else if(opcao == "2"){
			painelFuncionarios(caminho);
		}
	}
}

void painelAnimais(deque<string> caminho){
	caminho.push_back("ANIMAIS");
	string titulo = "ANIMAIS";
	string vetor_opcoes[] = {"VOLTAR", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR"};
	vector<string> opcoes(vetor_opcoes, vetor_opcoes + sizeof(vetor_opcoes) / sizeof(string));
	Painel animais(titulo, opcoes, caminho);
	
	while(animais.getAbrir()){
		animais.printPainel();
		string opcao = animais.getSelecao();

		if(opcao == "1"){
			animais.setMensagem("CADASTRAR");

		} else if(opcao == "2"){
			animais.setMensagem("REMOVER");

		} else if(opcao == "3"){
			animais.setMensagem("ALTERAR");

		} else if(opcao == "4"){
			painelAnimaisConsulta(caminho);
		}
	}
}

void painelAnimaisConsulta(deque<string> caminho){
	caminho.push_back("CONSULTAR");
	string titulo = "CONSULTAR ANIMAIS POR";
	string vetor_opcoes[] = {"VOLTAR", "NOME DE BATISMO", "ESPÉCIE", "CLASSE", "VETERINÁRIO RESPONSÁVEL", "TRATADOR RESPONSÁVEL"};
	vector<string> opcoes(vetor_opcoes, vetor_opcoes + sizeof(vetor_opcoes) / sizeof(string));
	Painel consultar(titulo, opcoes, caminho);
	
	while(consultar.getAbrir()){
		consultar.printPainel();
		string opcao = consultar.getSelecao();

		if(opcao == "1"){
			consultar.setMensagem("NOME DE BATISMO");

		} else if(opcao == "2"){
			consultar.setMensagem("ESPÉCIE");

		} else if(opcao == "3"){
			consultar.setMensagem("CLASSE");

		} else if(opcao == "4"){
			consultar.setMensagem("VETERINÁRIO RESPONSÁVEL");

		}  else if(opcao == "5"){
			consultar.setMensagem("TRATADOR RESPONSÁVEL");
		}
	}
}

void painelFuncionarios(deque<string> caminho){
	caminho.push_back("FUNCIONÁRIOS");
	string titulo = "FUNCIONÁRIOS";
	string vetor_opcoes[] = {"VOLTAR", "TRATADOR", "VETERINÁRIO"};
	vector<string> opcoes(vetor_opcoes, vetor_opcoes + sizeof(vetor_opcoes) / sizeof(string));
	Painel funcionarios(titulo, opcoes, caminho);	

	while(funcionarios.getAbrir()){
		funcionarios.printPainel();
		string opcao = funcionarios.getSelecao();

		if(opcao == "1"){
			string titulo = "TRATADORES";
			painelFuncionarios<Tratador>(titulo, caminho);

		} else if(opcao == "2"){
			string titulo = "VETERINARIOS";
			painelFuncionarios<Veterinario>(titulo, caminho);

		}
	}
}