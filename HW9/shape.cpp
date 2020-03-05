#include "imports.h"
#include "shape.h"

shape::shape() 
{
    l = 0;
    w = 0;
}

shape::shape(double l1, double w1)
{
    l = l1;
    w = w1;
}

double shape::calcPerimeter()
{
    //If calculating a rectangle
    if (w != 0) 
    {
        return ((l*2) + (w*2));
    } else { // if calculating a triangle
        return (l*3);
    }
}

double shape::calcArea() 
{
    //If calculating a rectangle
    if (w != 0) 
    {  
        return (l*w);
    } else { // if calculating a triangle
        return ((sqrt(3)/4) * (l*l));
    } 
}