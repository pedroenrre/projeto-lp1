#include <paineis.h>

using namespace std;

void painelPrincipal(){
	deque<string> caminho;
	caminho.push_back("GERENCIAR");
	string titulo = "GERENCIAR";
	vector<string> opcoes = {"SAIR", "ANIMAIS", "FUNCIONÁRIOS"};
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
	vector<string> opcoes = {"VOLTAR", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR"};
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
	vector<string> opcoes = {"VOLTAR", "NOME DE BATISMO", "ESPÉCIE", "CLASSE", "VETERINÁRIO RESPONSÁVEL", "TRATADOR RESPONSÁVEL"};
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
	vector<string> opcoes = {"VOLTAR", "TRATADOR", "VETERINÁRIO"};
	Painel funcionarios(titulo, opcoes, caminho);	

	while(funcionarios.getAbrir()){
		funcionarios.printPainel();
		string opcao = funcionarios.getSelecao();

		if(opcao == "1"){
			painelTratadores(caminho);

		} else if(opcao == "2"){
			painelVeterinarios(caminho);

		}
	}
}

void painelTratadores(deque<string> caminho){
	caminho.push_back("TRATADORES");
	string titulo = "TRATADORES";
	vector<string> opcoes = {"VOLTAR", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR"};
	Painel tratadores(titulo, opcoes, caminho);
	
	while(tratadores.getAbrir()){
		tratadores.printPainel();
		string opcao = tratadores.getSelecao();

		if(opcao == "1"){
			tratadores.setMensagem("CADASTRAR");

		} else if(opcao == "2"){
			tratadores.setMensagem("REMOVER");

		} else if(opcao == "3"){
			tratadores.setMensagem("ALTERAR");

		} else if(opcao == "4"){
			tratadores.setMensagem("CONSULTAR");

		}
	}
}

void painelVeterinarios(deque<string> caminho){
	caminho.push_back("VETERINARIOS");
	string titulo = "VETERINARIOS";
	vector<string> opcoes = {"VOLTAR", "CADASTRAR", "REMOVER", "ALTERAR", "CONSULTAR"};
	Painel veterinarios(titulo, opcoes, caminho);
	
	while(veterinarios.getAbrir()){
		veterinarios.printPainel();
		string opcao = veterinarios.getSelecao();

		if(opcao == "1"){
			veterinarios.setMensagem("CADASTRAR");

		} else if(opcao == "2"){
			veterinarios.setMensagem("REMOVER");

		} else if(opcao == "3"){
			veterinarios.setMensagem("ALTERAR");

		} else if(opcao == "4"){
			veterinarios.setMensagem("CONSULTAR");

		}
	}
}

