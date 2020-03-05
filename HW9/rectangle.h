#include "imports.h"

class rectangle: public virtual shape
{
    public:
        rectangle() : shape() { }
        rectangle(double l, double w) : shape(l, w) { }
};