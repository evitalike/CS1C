#include "employeeType.h"
#include "dateType.cpp"
#include "mainHeader.h"

//Constructors
employeeType::employeeType()
{
    name = "";
    id = "";
    phoneNumber = "";
    age = 0;
    gender = 'N';
    jobTitle = "";
    salary = "";
    hireDate.setDate(0, 0, 0);
}
employeeType::employeeType(string name1, string id1, string phoneNumber1, int age1, char gender1, string jobTitle1, string salary1, int day1, int month1, int year1)
{
    name = name1;
    id = id1;
    phoneNumber = phoneNumber1;
    age = age1;
    gender = gender1;
    jobTitle = jobTitle1;
    salary = salary1;
    hireDate.setDate(month1, day1, year1);
}

//Setters
void employeeType::setInfo(string name1, string id1, string phoneNumber1, int age1, char gender1, string jobTitle1, string salary1, int day1, int month1, int year1)
{
    name = name1;
    id = id1;
    phoneNumber = phoneNumber1;
    age = age1;
    gender = gender1;
    jobTitle = jobTitle1;
    salary = salary1;
    hireDate.setDate(month1, day1, year1);
}
void employeeType::setName(string name1)
{
    name = name1;
}
void employeeType::setID(string id1)
{
    id = id1;
}
void employeeType::setPhoneNumber(string phoneNumber1)
{
    phoneNumber = phoneNumber1;
}
void employeeType::setJobTitle(string jobTitle1)
{
    jobTitle = jobTitle1;
}
void employeeType::setSalary(string salary1)
{
    salary = salary1;
}
void employeeType::setHireDate(int day1, int month1, int year1) 
{
    hireDate.setDate(month1, day1, year1);
}
void employeeType::setGender(char gender1)
{
    gender = gender1;
}
void employeeType::setAge(int age1)
{
    age = age1;
}

//Getters
string employeeType::getName()
{
    return name;
}
string employeeType::getID()
{
    return id;
}
string employeeType::getPhoneNumber()
{
    return phoneNumber;
}
string employeeType::getJobTitle()
{
    return jobTitle;
}
string employeeType::getSalary()
{
    return salary;
}
string employeeType::getHireDate() // WILL CHANGE TO DATE TYPE
{
    return hireDate.getDate();
}
char employeeType::getGender()
{
    return gender;
}
int employeeType::getAge()
{
    return age;
}

//Other Functions
void employeeType::print()
{
    cout << "\n    >>  " << name << "  <<" << endl;
    cout << "ID > " << id << endl;
    cout << "Age > " << age << endl;
    cout << "Phone # > " << phoneNumber << endl;
    cout << "Title > " << jobTitle << endl;
    cout << "Salary > $" << salary << endl;
    cout << "Gender > " << gender << endl;
    cout << "Hire Date > " << getHireDate() << endl;
}