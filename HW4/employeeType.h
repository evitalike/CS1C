#ifndef EMPLOYEETYPE_H
#define EMPLOYEETYPE_H

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

    void addAge(int);

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

    //Overloading
    bool operator==(employeeType &);
    int operator+(int);
    void operator=(int);
    friend ostream &operator<<(ostream &, employeeType &);
    friend istream &operator>>(istream &, employeeType &);
    friend employeeType &operator++(employeeType &);
    friend employeeType operator++(employeeType &, int);

private:
    string name,
        id,
        phoneNumber,
        jobTitle,
        salary;
    dateType hireDate;
    char gender;
    int age;
};

#endif