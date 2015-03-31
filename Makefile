CC=g++

FLAGS=-Wall
SRC=src
INC=inc
OBJ=obj
BIN=bin
TEST=test

OBJS=$(OBJ)/bauer_yaml.o

INCPAR=-I$(INC)

all: $(OBJS)
	$(CC) -o $(OBJ)/bauer_compose.o $(OBJS) $(FLAGS) $(INCPAR)

$(OBJ)/bauer_yaml.o: $(SRC)/bauer_yaml.cpp
	$(CC) -o $(OBJ)/bauer_yaml.o -c $(SRC)/bauer_yaml.cpp $(FLAGS) $(INCPAR)

clear: 
	rm -rf $(OBJ) $(BIN)
	mkdir $(OBJ) $(BIN)
