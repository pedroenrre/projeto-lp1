all: main.o utilitarios.o painel.o paineis.o
	g++ -Wall -ansi -pedantic -o ./bin/program.out ./build/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./build/main.o

utilitarios.o:
	g++ -c ./src/utilitarios.cpp -I ./include -o ./build/utilitarios.o

painel.o:
	g++ -c ./src/painel.cpp -I ./include -o ./build/painel.o

paineis.o:
	g++ -c ./src/paineis.cpp -I ./include -o ./build/paineis.o

clear:
	rm ./build/*
	rm ./bin/*

run:
	./bin/program.out