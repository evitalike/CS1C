#ifndef EMPLOYEETYPE_H
#define EMPLOYEETYPE_H

#include "mainHeader.h"
#include "dateType.h"

class employeeType
{
public:
    //Setters
    void setInfo(string, string, string, int, char, string, string, int, int, int);
    void setName(string);
    void setID(string);
    void setPhoneNumber(string);
    void setJobTitle(string);
    void setSalary(string);
    void setHireDate(int, int, int);
    void setGender(char);
    void setAge(int);

    //Getters
    string getName();
    string getID();
    string getPhoneNumber();
    string getJobTitle();
    string getSalary();
    string getHireDate();
    char getGender();
    int getAge();

    //Constructors
    employeeType();
    employeeType(string, string, string, int, char, string, string, int, int, int);

    //Other Functions
    void print();

private:
    string name, id, phoneNumber, jobTitle, salary;
    dateType hireDate;
    char gender;
    int age;
};

#endif