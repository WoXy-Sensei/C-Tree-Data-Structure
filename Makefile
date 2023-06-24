all: compile run

compile:
	g++ -I ./include/ -o ./bin/main -std=c++17 ./src/main.cpp ./src/Node.cpp ./src/Tree.cpp

run:
	./bin/main