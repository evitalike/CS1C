##Set flags and gcc variable for easier reading
ASSIGNMENT = hw7
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ1 = item.o
HDR1 = item.h
CPP1 = item.cpp

OBJ2 = container.o
HDR2 = container.h
CPP2 = container.cpp

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(HDR1) $(CPP1) $(HDR2) $(CPP2)

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ1) $(OBJ2)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ1) $(OBJ2)

##Define every object inside of project (This is OBJ_1)

$(OBJ1): $(HDR1) $(CPP1) 
	$(CC) $(FLAGS) -c $(CPP1) -o $(OBJ1)

$(OBJ2): $(HDR2) $(CPP2) 
	$(CC) $(FLAGS) -c $(CPP2) -o $(OBJ2)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)                                                                                      