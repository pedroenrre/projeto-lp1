all: main.o painel.o paineis.o
	g++ -Wall -ansi -pedantic -o main ./build/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./build/main.o

painel.o:
	g++ -c ./src/painel.cpp -I ./include -o ./build/painel.o

paineis.o:
	g++ -c ./src/paineis.cpp -I ./include -o ./build/paineis.o

clear:
	rm ./build/*.o
	rm ./main

run:
	./main