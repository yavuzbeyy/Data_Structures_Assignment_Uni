all: compile run

compile:
	g++ -I ./include/ -o ./lib/factorial.o -c ./src/factorial.cpp
	g++ -I ./include/ -o ./lib/Arraylist.o -c ./src/Arraylist.cpp
	g++ -I ./include/ -o ./lib/Calculator.o -c ./src/Calculator.cpp
	g++ -I ./include/ -o ./lib/recursive.o -c ./src/recursive.cpp
	g++ -I ./include/ -o ./bin/main ./lib/Arraylist.o ./lib/Calculator.o ./lib/factorial.o  ./src/main.cpp 

run:
	./bin/main