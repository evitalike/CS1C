#include "softwareArchitectType.h"
#include "employeeType.h"

//Constructors
softwareArchitectType::softwareArchitectType()
{
    setAll(0, "", 0.0, 0);
}
softwareArchitectType::softwareArchitectType(string name1, string id1, string phoneNumber1, int age1, char gender1, string jobTitle1, string salary1, int day1, int month1, int year1, int departmentNumber1, string supervisor1, double salaryIncreasePercentage1, int yearsOfExperience1) : employeeType(name1, id1, phoneNumber1, age1, gender1, jobTitle1, salary1, month1, day1, year1)
{
    setAll(departmentNumber1, supervisor1, salaryIncreasePercentage1, yearsOfExperience1);
}

//Getters
int softwareArchitectType::getDepartmentNumber()
{
    return departmentNumber;
}
string softwareArchitectType::getSupervisor()
{
    return supervisor;
}
double softwareArchitectType::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}
int softwareArchitectType::getYearsOfExperience()
{
    return yearsOfExperience;
}

//Setters
void softwareArchitectType::setDepartmentNumber(int departmentNumber1)
{
    departmentNumber = departmentNumber1;
}
void softwareArchitectType::setSupervisor(string supervisor1)
{
    supervisor = supervisor1;
}
void softwareArchitectType::setSalaryIncreasePercentage(double salaryIncreasePercentage1)
{
    salaryIncreasePercentage = salaryIncreasePercentage1;
}
void softwareArchitectType::setYearsOfExperience(int yearsOfExperience1)
{
    yearsOfExperience = yearsOfExperience1;
}
void softwareArchitectType::setAll(int departmentNumber1, string supervisor1, double salaryIncreasePercentage1, int yearsOfExperience1)
{
    departmentNumber = departmentNumber1;
    supervisor = supervisor1;
    salaryIncreasePercentage = salaryIncreasePercentage1;
    yearsOfExperience = yearsOfExperience1;
}

//Other functions

void softwareArchitectType::print()
{
    employeeType::print();
    cout << "   Department # > " << departmentNumber << endl;
    cout << "   Supervisor > " << supervisor << endl;
    cout << "   Salary Inc. > " << salaryIncreasePercentage << "%" << endl;
    cout << "   Yrs of Experience > " << yearsOfExperience << endl;
}