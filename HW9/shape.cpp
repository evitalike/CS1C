#include "imports.h"
#include "shape.h"

shape::shape() 
{
    x = 0;
    y = 0;
}

shape::shape(double x1, double y1)
{
    x = x1;
    y = y1;
}

void shape::print() {
    cout << "Origin: (" << x << ", " << y << ")" << endl;
}

void shape::move(int x1, int y1)  
{
    x += x1;
    y += y1;
}