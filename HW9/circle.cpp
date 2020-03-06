#include "imports.h"
#include "circle.h"

double circle::calcPerimeter()
{
    return (2*3.14*r);
}

double circle::calcArea() 
{
    return (3.14*(r*r));
}


void circle::print() 
{
    shape::print();
    cout << "Radius > " << r << endl;
}

void circle::updateDimensions(double r1) 
{
    r = r1;
}