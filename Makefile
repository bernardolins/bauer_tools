CC=g++

FLAGS=-Wall -lyaml-cpp
SRC=src
INC=inc
OBJ=obj
BIN=bin
TEST=test
DEPINC=/usr/local/include
DEPLIB=/usr/local/lib
OBJS=$(OBJ)/bauer_yaml.o

INCPAR=-I$(INC) -I$(DEPINC) -L$(DEPLIB)

all: $(OBJS)
	$(CC) -o $(OBJ)/bauer_compose.o $(OBJS) $(FLAGS) $(INCPAR)

$(OBJ)/bauer_yaml.o: $(SRC)/bauer_yaml.cpp
	$(CC) -o $(OBJ)/bauer_yaml.o -c $(SRC)/bauer_yaml.cpp $(INCPAR) $(FLAGS)

clear: 
	rm -rf $(OBJ) $(BIN)
	mkdir $(OBJ) $(BIN)
