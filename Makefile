#sudo docker run -ti --rm -e LD_LIBRARY_PATH=/opt/gtest/lib -v /home/fausto/Project/frila:/var/project bernardolins/bauer_tools /bin/bash
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

INCPAR=-I$(INC) -I$(DEPINC) -L$(DEPLIB) -I$(INC)

all: $(OBJS)
	$(CC) -o $(OBJ)/bauer_compose.o $(OBJS) $(FLAGS) $(INCPAR)

$(OBJ)/bauer_yaml.o: $(SRC)/bauer_yaml.cpp
	$(CC) -o $(OBJ)/bauer_yaml.o -c $(SRC)/bauer_yaml.cpp $(INCPAR) $(FLAGS)

$(OBJ)/bauer_mutex.o: $(SRC)/thread/bauer_mutex.cpp
	$(CC) -o $(OBJ)/bauer_mutex.o -c $(SRC)/thread/bauer_mutex.cpp $(INCPAR)/thread $(FLAGS)


clear: 
	rm -rf $(OBJ) $(BIN)
	mkdir $(OBJ) $(BIN)
