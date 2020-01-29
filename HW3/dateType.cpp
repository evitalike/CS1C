#include "dateType.h"
#include "employeeType.h"

//Setters

void dateType::setDate(int month1, int day1, int year1)
{
    month = month1;
    day = day1;
    year = year1;
}
void dateType::setMonth(int month1)
{
    month = month1;
}
void dateType::setDay(int day1)
{
    day = day1;
}
void dateType::setYear(int year1)
{
    year = year1;
}

//Getters
string dateType::getDate()
{
    string date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    return date;
}