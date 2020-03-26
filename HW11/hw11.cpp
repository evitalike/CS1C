// hw11.cpp
// to illustrate function pointers and virtual functions

/*************************************************************************
 * AUTHOR     : Kevin Nguyen
 * HW11       : function pointers and virtual functions
 * CLASS      : CS 1C
 * SECTION    : 3/25/20
*************************************************************************/

#include <iostream>
#include <algorithm>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// function & class definitions go into hw11.cpp:

// hw11.cpp

namespace hw11 {

//--Q#1-------------------------------------------------------------------------

// (footnote 1) Functions to return values directly

string foo()
{
    return "foo";
}

//------------------------------------------------------------------------------

int hoo(int x)
{
    return x;
}

//------------------------------------------------------------------------------

int boo(int x)
{
    return 2 * x;
}

//------------------------------------------------------------------------------

double goo(int x, double y)
{
    return x * y;
}

// (footnote 1 - source) adapted from learncpp.com - Alex - 7.8 function pointers

//--Q#2-------------------------------------------------------------------------

// (footnote 1)

// Note our user-defined comparison is the third parameter
void selectionSort(int *array, int size, char input) // ???
{
    // Step through each element of the array
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        // bestIndex is the index of the smallest/largest element we've encountered so far.
        int bestIndex = startIndex;
 
        // Look for smallest/largest element remaining in the array (starting at startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            // If the current element is smaller/larger than our previously found smallest
            if (input == 'a') {
                if (array[currentIndex] < array[bestIndex]) // COMPARISON DONE HERE !! Done?
                // This is the new smallest/largest number for this iteration
                bestIndex = currentIndex;
            }
            if (input == 'd') {
                if (array[currentIndex] > array[bestIndex]) // COMPARISON DONE HERE !! Done?
                // This is the new smallest/largest number for this iteration
                bestIndex = currentIndex;
            }
        }
 
        // Swap our start element with our smallest/largest element
        std::swap(array[startIndex], array[bestIndex]);
    }
}

//------------------------------------------------------------------------------
 
// Here is a comparison function that sorts in ascending order
// (Note: it's exactly the same as the previous ascending() function)
void ascending(int *x, int y)
{
    selectionSort(x, y, 'a');
}

//------------------------------------------------------------------------------
 
// Here is a comparison function that sorts in descending order
void descending(int *x, int y)
{
    selectionSort(x, y, 'd');
}

//------------------------------------------------------------------------------
 
// custom comparison function, explain how your function sorts array components

/*  EXPLANATION: 
        A bubble sort will compare two elements at a time (e.g. 0 and 1)
        then swap them if the first one is greater than the first one (ascending order)
        then compare the two after the first (1 and 2) and repeat until the end of the
        array, then go through the list again. It repeats this process for the 
        amount of elements in the array.

*/
void bubbleSort(int *array, int size) 
{
    int i, j;  
    for (i = 0; i < size - 1; i++)      
      
    for (j = 0; j < size - i - 1; j++)  
        if (array[j] > array[j+1])  
            std::swap(&array[j], &array[j+1]);  
}

//------------------------------------------------------------------------------
 
// This function prints out the values in the array
void printArray(int *array, int size)
{
    for (int index=0; index < size; ++index)
        cout << array[index] << " ";
    cout << '\n';
}

// (footnote 1 - source) learncpp.com - Alex - 7.8 function pointers

//--Q#3,4-----------------------------------------------------------------------

// (footnote 2)

class Base
{
public:
    virtual void function1() {};
    virtual void function2() {};
};
 
//------------------------------------------------------------------------------
 
class D1 : public Base
{
public:
    virtual void function2() {};
};
 
//------------------------------------------------------------------------------
 
class D2 : public Base
{
public:
    virtual void function1() {};
    virtual void function3() {};
};

//------------------------------------------------------------------------------

class D3 : public D2
{
public:
    virtual void function2() {};
};

// (footnote 2 - source) adapted from learncpp.com - Alex - 12.5 the virtual table

//--Q#5-------------------------------------------------------------------------

class BaseSlice
{
   int base_id;
};

//------------------------------------------------------------------------------

class DerivedSlice : public BaseSlice
{
   int derived_id;
};

//------------------------------------------------------------------------------

} // hw11

//------------------------------------------------------------------------------

using namespace hw11;

int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*           Running HW11             * " << endl;
	cout << "*      Programmed by First Last      * " << endl;
	cout << "*      CS1C Date & Time              * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

	// Q#1 - function pointer examples

    // function pointer assignments
    // ... // [1.1] declare and init function pointer fcnPtr1 to point to function foo
    string *fcnPtr1->foo();
    // ... // [1.2] declare and init function pointer fcnPtr2 to point to function hoo
    int *fcnPtr2->hoo();
    // ... // [1.3] declare and init function pointer fcnPtr3 to point to function goo
    double *fcnPtr3->goo();
    // ... // [1.4] assign fcnPtr1 to point to boo
    *fcnPtr1 = boo();
    // ... // [1.5] assign fcnPtr2 to point to boo, okay - function pointer signature matches function boo
    fcnPtr2 = boo();
    // calling a function using a function pointer via explicit dereference
    // ... // [1.6] call function goo(2,5.0) through fcnPtr3 via explicit dereference
    *fcnPtr3 = goo(2, 5.0);

    // calling a function using a function pointer via implicit dereference
    // ... // [1.7] call function goo(2,5.0) through fcnPtr3 implicit dereference
    &fcnPtr3 = goo(2, 5.0);

	// Q#2 - function pointers - calling user defined comparison functions in algorithms

    int array[9] = { 3, 7, 9, 5, 6, 1, 8, 2, 4 };

    // TEMP - COMPLETE FUNCTION CALL AND UNCOMMENT LINE BELOW
    selectionSort(array, 9, 'd'); // [2.1] sort array in descending order
    printArray(array, 9);
 
    // TEMP - COMPLETE FUNCTION CALL AND UNCOMMENT LINE BELOW
    selectionSort(array, 9, 'a'); // [2.2] sort array in ascending order
    printArray(array, 9);
 
    // TEMP - COMPLETE FUNCTION CALL AND UNCOMMENT LINE BELOW
    selectionSort(array, 9); // [2.3] sort array via custom_sort algorithm
    printArray(array, 9);

	// Q#3,4 - virtual function tables & calls

    D2 d2;
    Base *dPtr = &d2;
    dPtr->function1(); // [Q#4] what happens here ... explain in WRITTEN ANSWERS below?

	// Q#5 - the slicing problem

    DerivedSlice dSlice;          // instantiate derived class object
    BaseSlice baseSlice = dSlice; // instantiate base class object and assign to derived class
                                  // [Q#5] what is the slicing problem ... explain in WRITTEN ANSWERS below?


    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// Q#3 (footnote 1)

/******* Base Class Virtual Function Table ********/
/* virtual function1() -> calls Base::function1() */
/* virtual function2() -> calls Base::function2() */
/**************************************************/

/******* D1 Class Virtual Function Table **********/
/* virtual function1() -> ...FILL IN MISSING CALL */
/* virtual function2() -> ...FILL IN MISSING CALL */
/**************************************************/

/******* D2 Class Virtual Function Table **********/
/* virtual function1() -> ...FILL IN MISSING CALL */
/* virtual function2() -> ...FILL IN MISSING CALL */
/* virtual function3() -> ...FILL IN MISSING CALL */
/**************************************************/

/******* D3 Class Virtual Function Table **********/
/* virtual function1() -> ...FILL IN MISSING CALL */
/* virtual function2() -> ...FILL IN MISSING CALL */
/* virtual function3() -> ...FILL IN MISSING CALL */
/**************************************************/

// (footnote 1 - source) adapted from learncpp.com - Alex - 12.5 the virtual table

// Q#4

// add written answers here

// Q#5

// add written answers here
