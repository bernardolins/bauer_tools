CC=g++

FLAGS=-Wall

SRC=src
OBJ=obj
DEP=../src
BIN=bin

INC=-I/opt/gtest/include -I../inc -I../inc/thread -I../inc/exception -Isrc -I../src -I$(DEPINC) -L$(DEPLIB)

DEPINC=/usr/local/include
DEPLIB=/usr/local/lib

FLAGS=-g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread -lyaml-cpp
OBJS=$(OBJ)/yaml_test.o $(OBJ)/exception_test.o $(OBJ)/thread_test.o $(OBJ)/test_main.o $(OBJ)/bauer_yaml.o $(OBJ)/bauer_exception.o

NAME=test-all

test-all: $(OBJS)
	$(CC) -o $(BIN)/$(NAME) $(OBJS) $(INC) $(FLAGS)

#### building test source
$(OBJ)/test_main.o:
	$(CC) -o $(OBJ)/test_main.o -c $(SRC)/test_main.cpp $(INC) $(FLAGS)

$(OBJ)/yaml_test.o: $(SRC)/yaml_test.cpp
	$(CC) -o $(OBJ)/yaml_test.o -c $(SRC)/yaml_test.cpp $(INC) $(FLAGS)

$(OBJ)/exception_test.o: $(SRC)/exception_test.cpp
	$(CC) -o $(OBJ)/exception_test.o -c $(SRC)/exception_test.cpp $(INC) $(FLAGS)

$(OBJ)/thread_test.o: $(SRC)/thread_test.cpp
	$(CC) -o $(OBJ)/thread_test.o -c $(SRC)/thread_test.cpp $(INC) $(FLAGS)

#### building dependencies
$(OBJ)/bauer_yaml.o: $(DEP)/bauer_yaml.cpp
	$(CC) -o $(OBJ)/bauer_yaml.o -c $(DEP)/bauer_yaml.cpp $(INC) $(FLAGS)

$(OBJ)/bauer_thread.o: $(DEP)/bauer_thread.cpp
	$(CC) -o $(OBJ)/bauer_thread.o -c $(DEP)/bauer_thread.cpp $(INC) $(FLAGS)

$(OBJ)/bauer_exception.o: $(DEP)/bauer_exception.cpp
	$(CC) -o $(OBJ)/bauer_exception.o -c $(DEP)/bauer_exception.cpp $(INC) $(FLAGS)

$(OBJ)/bauer_thread_not_created_exception.o: $(DEP)/bauer_thread_not_created_exception.cpp
	$(CC) -o $(OBJ)/bauer_thread_not_created_exception.o -c $(DEP)/bauer_thread_not_created_exception.cpp $(INC) $(FLAGS)

clear:
	rm -rf $(OBJ) $(BIN)/$(NAME)
	mkdir $(OBJ) 

