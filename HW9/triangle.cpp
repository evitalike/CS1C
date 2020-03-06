#include "imports.h"
#include "triangle.h"

double triangle::calcPerimeter()
{
    return (l*3);
}

double triangle::calcArea() 
{
    return ((sqrt(3)/4) * (l*l));
}

void triangle::print() {
    shape::print();
    cout << "Side Length > " << l << endl;
}

void triangle::updateDimensions(double l1)
{
    l = l1;
}