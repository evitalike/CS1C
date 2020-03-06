#ifndef rectangle_H
#define rectangle_H

#include "imports.h"
#include "shape.h"

class rectangle: public shape
{
    public:
        using shape::calcPerimeter;
        using shape::calcArea;
        using shape::updateDimensions;

        rectangle() : shape() { }
        rectangle(double l1, double w1) : shape() { l = l1; w = w1; }

        double calcPerimeter() override;
        double calcArea() override;

        void updateDimensions(double, double);

        void print();

    private:
        double l, w;
};

#endif