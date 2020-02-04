#include "mainHeader.h"
#include "programmerType.h"

bool checkNum(employeeType me, programmerType other)
{
    if (me.getPhoneNumber() == other.getPhoneNumber())
        return true;
    else
        return false;
}

//Constructors
programmerType::programmerType()
{
    setAll(0, "", 0.0, false, false);
}
programmerType::programmerType(string name1, string id1, string phoneNumber1, int age1, char gender1, string jobTitle1, string salary1, int day1, int month1, int year1, int departmentNumber1, string supervisor1, double salaryIncreasePercentage1, bool cpp1, bool java1) : employeeType(name1, id1, phoneNumber1, age1, gender1, jobTitle1, salary1, month1, day1, year1)
{
    setAll(departmentNumber1, supervisor1, salaryIncreasePercentage1, cpp1, java1);
}

//Getters
int programmerType::getDepartmentNumber()
{
    return departmentNumber;
}
string programmerType::getSupervisor()
{
    return supervisor;
}
double programmerType::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}
bool programmerType::getCPP()
{
    return cpp;
}
bool programmerType::getJava()
{
    return java;
}

//Setters
void programmerType::setDepartmentNumber(int departmentNumber1)
{
    departmentNumber = departmentNumber1;
}
void programmerType::setSupervisor(string supervisor1)
{
    supervisor = supervisor1;
}
void programmerType::setSalaryIncreasePercentage(double salaryIncreasePercentage1)
{
    salaryIncreasePercentage = salaryIncreasePercentage1;
}
void programmerType::setCPP(bool cpp1)
{
    cpp = cpp1;
}
void programmerType::setJava(bool java1)
{
    java = java1;
}
void programmerType::setAll(int departmentNumber1, string supervisor1, double salaryIncreasePercentage1, bool cpp1, bool java1)
{
    departmentNumber = departmentNumber1;
    supervisor = supervisor1;
    salaryIncreasePercentage = salaryIncreasePercentage1;
    cpp = cpp1;
    java = java1;
}

//Other functions
void programmerType::print()
{
    employeeType::print();
    cout << "   Department # > " << departmentNumber << endl;
    cout << "   Supervisor > " << supervisor << endl;
    cout << "   Salary Inc. > " << salaryIncreasePercentage << "%" << endl;
    cout << "   CPP > " << cpp << endl;
    cout << "   Java > " << java << endl;
}