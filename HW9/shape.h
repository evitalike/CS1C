#ifndef shape_H
#define shape_H

#include "imports.h"

class shape
{
    public: 

        shape();
        shape(double, double);

        void print();

        virtual double calcPerimeter() { return 0; }
        virtual double calcArea() { return 0; }

        virtual void updateDimensions() { }

        void move(int, int);


    private:
        int x, y;
};

#endif