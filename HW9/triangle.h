#include "imports.h"

class triangle: virtual public shape 
{
    public:
        triangle() : shape() { }
        triangle(double l, double w) : shape(l, w) { }
};