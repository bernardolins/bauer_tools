CC=g++

FLAGS=-Wall

SRC=src
OBJ=obj
DEP=../src
BIN=bin

INC=-I/opt/gtest/include -I../inc -Isrc -I../src -I$(DEPINC) -L$(DEPLIB)

DEPINC=/usr/local/include
DEPLIB=/usr/local/lib

FLAGS=-g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread -lyaml-cpp
OBJS=$(OBJ)/yaml_test.o $(OBJ)/test_main.o $(OBJ)/bauer_yaml.o

test-all: $(OBJS)
	$(CC) -o $(BIN)/test-all $(OBJS) $(INC) $(FLAGS)

$(OBJ)/test_main.o:
	$(CC) -o $(OBJ)/test_main.o -c $(SRC)/test_main.cpp $(INC) $(FLAGS)

$(OBJ)/yaml_test.o: $(SRC)/yaml_test.cpp
	$(CC) -o $(OBJ)/yaml_test.o -c $(SRC)/yaml_test.cpp $(INC) $(FLAGS)

$(OBJ)/bauer_yaml.o: $(DEP)/bauer_yaml.cpp
	$(CC) -o $(OBJ)/bauer_yaml.o -c $(DEP)/bauer_yaml.cpp $(INC) $(FLAGS)

clear:
	rm -rf $(OBJ) $(BIN)
	mkdir $(OBJ) $(BIN)

