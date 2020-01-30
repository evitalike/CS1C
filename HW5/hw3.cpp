#include "employeeType.h"
#include "softwareArchitectType.h"
#include "programmerType.h"
#include "mainHeader.h"

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW3 - Class Interfaces, Inheritance & Composition
*/

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cin.get();
}

void clear()
{
    system("clear");
}

int main()
{
    clear();
    cout << "Beginning creation of employees..." << endl;

    employeeType e1("Jimmy Fallon", "12345", "949-555-1234", 40, 'M', "Comedian", "100,000", 8, 31, 2014);
    employeeType e2;
    e2.setInfo("Stephan Colbert", "12346", "310-555-5555", 51, 'M', "Comedian", "70,123", 5, 8, 2015);

    programmerType p1("Sam Software", "54321", "819-123-4567", 21, 'M', "Programmer", "223,000", 12, 24, 2011, 5432122, "Joe Boss", 0.04, true, false);
    programmerType p2;
    p2.setInfo("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", "770,123", 2, 8, 2010);
    p2.setAll(6543222, "Mary Leader", 0.07, true, true);

    softwareArchitectType s1("Alex Arch", "88888", "819-123-4444", 31, 'M', "Architect", "323,000", 12, 24, 2009, 5434222, "Big Boss", 0.05, 4);
    softwareArchitectType s2;
    s2.setInfo("Sally Designer", "87878", "310-555-8888", 38, 'F', "Architect", "870,123", 2, 8, 2003);
    s2.setAll(6543422, "Big Boss", 0.08, 11);

    cout << "Loaded employees! Hit ENTER to print." << endl;
    pause();
    clear();

    e1.print();
    e2.print();
    p1.print();
    p2.print();
    s1.print();
    s2.print();

    pause();
    clear();

    cout << "Making changes to employees...";

    e1.setID("99999");
    e2.setAge(19);
    p1.setCPP(false);
    p2.setDepartmentNumber(999231);
    s1.setYearsOfExperience(10);
    s2.setSalary("234,412");

    cout << "DONE. Press ENTER to print." << endl;
    pause();
    clear();

    e1.print();
    e2.print();
    p1.print();
    p2.print();
    s1.print();
    s2.print();

    pause();
    clear();

    return 0;
}
