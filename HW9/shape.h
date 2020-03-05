#include "imports.h"

class shape
{
    public: 

        shape();
        shape(double, double);

        virtual double calcPerimeter();
        virtual double calcArea();


    private:
        double l, w;
};