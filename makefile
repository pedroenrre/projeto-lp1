all: main.o excecao.o utilitarios.o painel.o paineis.o funcionario.o tratador.o veterinario.o cadastrar.o map_funcionarios.o consultar.o
	g++ -Wall -ansi -pedantic -g -o ./bin/program.out ./build/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./build/main.o

utilitarios.o:
	g++ -c ./src/utilitarios.cpp -I ./include -o ./build/utilitarios.o

excecao.o:
	g++ -c ./src/excecao.cpp -I ./include -o ./build/excecao.o

painel.o:
	g++ -c ./src/painel.cpp -I ./include -o ./build/painel.o

paineis.o:
	g++ -c ./src/paineis.cpp -I ./include -o ./build/paineis.o

funcionario.o:
	g++ -c ./src/funcionarios/funcionario.cpp -I ./include -o ./build/funcionario.o

tratador.o:
	g++ -c ./src/funcionarios/tratador.cpp -I ./include -o ./build/tratador.o

veterinario.o:
	g++ -c ./src/funcionarios/veterinario.cpp -I ./include -o ./build/veterinario.o

map_funcionarios.o:
	g++ -c ./src/funcionarios/map_funcionarios.cpp -I ./include -o ./build/map_funcionarios.o

cadastrar.o:
	g++ -c ./src/cadastrar.cpp -I ./include -o ./build/cadastrar.o

consultar.o:
	g++ -c ./src/consultar.cpp -I ./include -o ./build/consultar.o

clear:
	rm ./build/*
	rm ./bin/*

run:
	./bin/program.out