#include <iostream>
#include "time.h"
#include "extendedTime.h"

void ExtendedTime::setTimeZone(TimeZone timezone1)
{
    timeZone = timezone1;
}

ExtendedTime::ExtendedTime()
{
    timeZone = EMPTY;
}

ExtendedTime::ExtendedTime(int hours, int minutes, int seconds, TimeZone timezone1) : Time(hours, minutes, seconds)
{
    setTimeZone(timezone1);
}

void ExtendedTime::printTime()
{
    Time::printTime();

    switch (timeZone)
    {
    case PACIFIC:
        cout << "PACIFIC" << endl;
        break;
    case MOUNTAIN:
        cout << "MOUNTAIN" << endl;
        break;
    case CENTRAL:
        cout << "CENTRAL" << endl;
        break;
    case EASTERN:
        cout << "EASTERN" << endl;
        break;
    case EMPTY:
        cout << "EMPTY" << endl;
        break;
    }
}

ostream &operator<<(ostream &os, ExtendedTime &obj)
{
    obj.printTime();
    return os;
}
