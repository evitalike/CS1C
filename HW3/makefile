##Set flags and gcc variable for easier reading
ASSIGNMENT = hw3
CC = g++
FLAGS = -std=c++14 -Wall -g

##These are the objects created
OBJ_1 = employeeType.o
HDR_1 = employeeType.h
CPP_1 = employeeType.cpp

OBJ_2 = programmerType.o
HDR_2 = programmerType.h
CPP_2 = programmerType.cpp

OBJ_3 = softwareArchitectType.o
HDR_3 = softwareArchitectType.h
CPP_3 = softwareArchitectType.cpp

##The list of all project files
PROJFILES = makefile $(ASSIGNMENT).cpp $(HDR_1) $(CPP_1) $(HDR_2) $(CPP_2) $(HDR_3) $(CPP_3) 

##Definition for function "all"
all: $(ASSIGNMENT)

##Statement definition for compilation of objects into execution file
$(ASSIGNMENT): $(ASSIGNMENT).cpp $(OBJ_1) $(OBJ_2) $(OBJ_3)
	$(CC) $(FLAGS) $(ASSIGNMENT).cpp -o $(ASSIGNMENT) $(OBJ_1) $(OBJ_2) $(OBJ_3)

##Define every object inside of project (This is OBJ_1)
$(OBJ_1): $(CPP_1) $(HDR_1)
	$(CC) $(FLAGS) -c $(CPP_1) -o $(OBJ_1)

$(OBJ_2): $(CPP_2) $(HDR_2)
	$(CC) $(FLAGS) -c $(CPP_2) -o $(OBJ_2)

$(OBJ_3): $(CPP_3) $(HDR_3)
	$(CC) $(FLAGS) -c $(CPP_3) -o $(OBJ_3)

##Definition for function "clean"
clean:
	rm *.o $(ASSIGNMENT) $(ASSIGNMENT).tar

##Definition for function "tar"
tar:
	tar cf $(ASSIGNMENT).tar $(PROJFILES)                                                                                      