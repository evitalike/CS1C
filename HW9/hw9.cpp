#include "imports.h"
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW9 - Virtual Functions & Abstract Classes
*/

void printPerimeter(shape x) 
{
    cout << "Perimeter > " << x.calcPerimeter() << endl;
}
void printArea(shape x) 
{
    cout << "Area > " << x.calcArea() << endl;
}

int main() 
{
    double tL, tW;

    system("clear");

    cout << " > > > Rectangle Input < < <" << endl;
    cout << "Enter Length > ";
    cin >> tL;
    cout << "Enter Width > ";
    cin >> tW;

    rectangle rect(tL, tW);

    cout << endl;

    cout << " > > > Triangle Input < < <" << endl;
    cout << "Enter Length > ";
    cin >> tL;

    triangle tri(tL, 0);

    system("clear");

    cout << " > > > Rectangle Info < < <" << endl;
    printPerimeter(rect);
    printArea(rect);

    cout << " > > > Triangle Info < < <" << endl;
    printPerimeter(tri);
    printArea(tri);


    return 0;




}