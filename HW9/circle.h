#ifndef circle_H
#define circle_H

#include "imports.h"
#include "shape.h"

class circle: public shape
{
    public:
        using shape::calcPerimeter;
        using shape::calcArea;
        using shape::updateDimensions;

        circle() { }
        circle(double r1) { r = r1; }

        double calcPerimeter() override;
        double calcArea() override;

        void print();
        void updateDimensions(double);

    private:
        double r;

};

#endif