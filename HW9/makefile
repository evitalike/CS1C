##Set flags and gcc variable for easier reading
ASSIGNMENT = hw9
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ1 = shape.o
HDR1 = shape.h
CPP1 = shape.cpp

HDR2 = rectangle.h
HDR3 = triangle.h

HDR4 = imports.h

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(ASSIGNMENT).scr $(HDR4) $(HDR2) $(HDR3)

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(HDR4) $(HDR2) $(HDR3) $(OBJ1)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ1)

##Define every object inside of project (This is OBJ_1)

$(OBJ1): $(HDR1) $(CPP1) 
	$(CC) $(FLAGS) -c $(CPP1) -o $(OBJ1)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)                                                                                      