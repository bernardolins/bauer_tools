CC=g++

FLAGS=-Wall
SRC=src
OBJ=obj
DEP=../obj
BIN=bin
INC=-I/opt/gtest/include -I../inc -Isrc -I../src
FLAGS=-g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread
OBJS=$(OBJ)/test_parser.o $(OBJ)/test_main.o $(DEP)/bauer_parser.o

test-all: $(OBJS)
	$(CC) -o $(BIN)/test-all $(OBJS) $(INC) $(FLAGS)

$(OBJ)/test_main.o:
	$(CC) -o $(OBJ)/test_main.o -c $(SRC)/test_main.cpp $(INC) $(FLAGS)

$(OBJ)/yaml_test.o: $(SRC)/yaml_test.cpp
	$(CC) -o $(OBJ)/yaml_test.o -c $(SRC)/yaml_test.cpp $(INC) $(FLAGS)

clear:
	rm -rf $(OBJ) $(BIN)
	mkdir $(OBJ) $(BIN)

