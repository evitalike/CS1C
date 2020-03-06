##Set flags and gcc variable for easier reading
ASSIGNMENT = hw9
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ1 = shape.o
HDR1 = shape.h
CPP1 = shape.cpp

OBJ2 = triangle.o
HDR2 = triangle.h
CPP2 = triangle.cpp

OBJ3 = rectangle.o
HDR3 = rectangle.h
CPP3 = rectangle.cpp

OBJ4 = circle.o
HDR4 = circle.h
CPP4 = circle.cpp

HDR4 = imports.h

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(ASSIGNMENT).scr $(HDR1) $(CPP1) $(HDR2) $(CPP2) $(HDR3) $(CPP3) $(HDR4) $(CPP4)

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)

##Define every object inside of project (This is OBJ_1)

$(OBJ1): $(HDR1) $(CPP1) 
	$(CC) $(FLAGS) -c $(CPP1) -o $(OBJ1)

$(OBJ2): $(HDR2) $(CPP2) 
	$(CC) $(FLAGS) -c $(CPP2) -o $(OBJ2)

$(OBJ3): $(HDR3) $(CPP3) 
	$(CC) $(FLAGS) -c $(CPP3) -o $(OBJ3)

$(OBJ4): $(HDR4) $(CPP4) 
	$(CC) $(FLAGS) -c $(CPP4) -o $(OBJ4)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)                                                                                      