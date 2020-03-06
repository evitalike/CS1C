#include "imports.h"
#include "rectangle.h"

double rectangle::calcPerimeter()
{
    return ((l*2) + (w*2));
}

double rectangle::calcArea() 
{
    return (l*w);
}

void rectangle::print() {
    shape::print();
    cout << "Length > " << l << endl;
    cout << "Width > " << w << endl;
}

void rectangle::updateDimensions(double l1, double w1)
{
    l = l1;
    w = w1;
}