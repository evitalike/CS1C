#ifndef SOFTWAREARCHITECT_H
#define SOFTWAREARCHITECT_H

#include "employeeType.h"

class softwareArchitectType : public employeeType
{
public:
    //Getters
    int getDepartmentNumber();
    string getSupervisor();
    double getSalaryIncreasePercentage();
    int getYearsOfExperience();

    //Setters
    void setDepartmentNumber(int);
    void setSupervisor(string);
    void setSalaryIncreasePercentage(double);
    void setYearsOfExperience(int);
    void setAll(int, string, double, int);

    //Constructors
    softwareArchitectType();
    softwareArchitectType(string, string, string, int, char, string, string, int, int, int, int, string, double, int);

    //Other functions
    void print();

private:
    int departmentNumber;
    string supervisor;
    double salaryIncreasePercentage;
    int yearsOfExperience;
};

#endif