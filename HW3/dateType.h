#ifndef DATETYPE_H
#define DATETYPE_H

#include "mainHeader.h"

class dateType
{
public:
    //Setters
    void setDate(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    //Getters
    string getDate();

private:
    int month, day, year;
};

#endif