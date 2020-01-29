#ifndef PROGRAMMERTYPE_H
#define PROGRAMMERTYPE_H

#include "employeeType.h"

class programmerType : public employeeType
{
public:
    //Getters
    int getDepartmentNumber();
    string getSupervisor();
    double getSalaryIncreasePercentage();
    bool getCPP();
    bool getJava();

    //Setters
    void setDepartmentNumber(int);
    void setSupervisor(string);
    void setSalaryIncreasePercentage(double);
    void setCPP(bool);
    void setJava(bool);
    void setAll(int, string, double, bool, bool);

    //Constructors
    programmerType();
    programmerType(string, string, string, int, char, string, string, int, int, int, int, string, double, bool, bool);
    
    //Other functions

    void print();

private:
    int departmentNumber;
    string supervisor;
    double salaryIncreasePercentage;
    bool cpp;
    bool java;
};

#endif