#ifndef triangle_H
#define triangle_H

#include "imports.h"
#include "shape.h"

class triangle: public shape 
{
    public:
        using shape::calcPerimeter;
        using shape::calcArea;
        using shape::updateDimensions;


        triangle() : shape() { }
        triangle(double l1) : shape() { l = l1; }

        double calcPerimeter() override;
        double calcArea() override;

        void updateDimensions(double);

        void print();

    private: 
        double l;
};

#endif