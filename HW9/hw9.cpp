#include "imports.h"
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW9 - Virtual Functions & Abstract Classes
*/

void printPerimeter(shape *x) 
{
    cout << "Perimeter > " << x->calcPerimeter() << endl;
}
void printArea(shape *x) 
{
    cout << "Area > " << x->calcArea() << endl;
}

int main() 
{
    double tL, tW;
    int x, y;

    system("clear");

    cout << " > > > Rectangle Input < < <" << endl;
    cout << "Enter Length > ";
    cin >> tL;
    cout << "Enter Width > ";
    cin >> tW;

    rectangle *rect = new rectangle(tL, tW); // Create Rectangle Object

    cout << endl;

    cout << " > > > Triangle Input < < <" << endl;
    cout << "Enter Length > ";
    cin >> tL;

    triangle *tri = new triangle(tL); // Create Triangle Object

    cout << endl;

    cout << " > > > Circle Input < < <" << endl;
    cout << "Enter Radius > ";
    cin >> tL;

    circle *cir = new circle(tL); // Create CIrcle Object

    system("clear");

    cout << " > > > Rectangle Input < < <" << endl;
    cout << "Enter Amount to move in x > ";
    cin >> x;
    cout << "Enter Amount to move in y > ";
    cin >> y;

    rect->move(x, y);

    cout << endl;

    cout << " > > > Triangle Input < < <" << endl;
    cout << "Enter Amount to move in x > ";
    cin >> x;
    cout << "Enter Amount to move in y > ";
    cin >> y;

    tri->move(x, y);

    cout << endl;

    cout << " > > > Circle Input < < <" << endl;
    cout << "Enter Amount to move in x > ";
    cin >> x;
    cout << "Enter Amount to move in y > ";
    cin >> y;

    cir->move(x, y);

    system("clear");

    cout << " > > > Rectangle Info < < <" << endl;
    printPerimeter(rect);
    printArea(rect);
    rect->print();
    cout << endl;

    cout << " > > > Triangle Info < < <" << endl;
    printPerimeter(tri);
    printArea(tri);
    tri->print();
    cout << endl;

    cout << " > > > Circle Info < < <" << endl;
    printPerimeter(cir);
    printArea(cir);
    cir->print();

    return 0;




}