#ifndef TIME_H
#define TIME_H

#include <string>

using namespace std;

class Time
{
public:
    void setTime(int, int, int);
    void printTime();
    Time();
    Time(int, int, int);

private:
    int seconds;
    int minutes;
    int hours;
};

#endif
