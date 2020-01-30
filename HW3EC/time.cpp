#include "time.h"
#include <iostream>

//Setters
void Time::setTime(int hours1, int minutes1, int seconds1)
{
    hours = hours1;
    minutes = minutes1;
    seconds = seconds1;
}

//Default Constructor
Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int hours1, int minutes1, int seconds1)
{
    setTime(hours1, minutes1, seconds1);
}

//Funct
void Time::printTime()
{
    if (hours < 10)
    {
        cout << "0" << hours << "h ";
    }
    else
    {
        cout << hours << "h ";
    }
    if (minutes < 10)
    {
        cout << "0" << minutes << "m ";
    }
    else
    {
        cout << minutes << "m ";
    }
    if (seconds < 10)
    {
        cout << "0" << seconds << "s ";
    }
    else
    {
        cout << seconds << "s ";
    }
}
