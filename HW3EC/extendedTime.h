#ifndef EXTENDEDTIME_H
#define EXTENDEDTIME_H

#include <string>
#include "time.h"

enum TimeZone
{
    PACIFIC,
    MOUNTAIN,
    CENTRAL,
    EASTERN,
    EMPTY
};

class ExtendedTime : public Time
{
public:
    void setTimeZone(TimeZone);
    void printTime();
    ExtendedTime();
    ExtendedTime(int, int, int, TimeZone);
    friend ostream &operator<<(ostream &os, ExtendedTime &obj);

private:
    TimeZone timeZone;
};

#endif
