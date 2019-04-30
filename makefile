all: main.o
	g++ -Wall -ansi -pedantic -o main ./build/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./build/main.o

clear:
	rm ./build/*.o
	rm ./main

run:
	./main