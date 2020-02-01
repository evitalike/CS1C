#include "employeeType.h"
#include "softwareArchitectType.h"
#include "programmerType.h"
#include "mainHeader.h"

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void clear()
{
    system("clear");
}

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW4 - Friend Functions & Operator Overloading
*/

int main()
{
    clear();
    cout << "Beginning creation of employees..." << endl;

    employeeType e1("Jimmy Fallon", "12345", "949-555-1234", 40, 'M', "Comedian", "100,000", 8, 31, 2014);
    employeeType e2;
    e2.setInfo("Stephan Colbert", "12346", "949-555-1234", 51, 'M', "Comedian", "70,123", 5, 8, 2015);

    programmerType p1("Sam Software", "54321", "949-555-1234", 21, 'M', "Programmer", "223,000", 12, 24, 2011, 5432122, "Joe Boss", 0.04, true, false);
    programmerType p2;
    p2.setInfo("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", "770,123", 2, 8, 2010);
    p2.setAll(6543222, "Mary Leader", 0.07, true, true);

    softwareArchitectType s1("Alex Arch", "88888", "819-123-4444", 31, 'M', "Architect", "323,000", 12, 24, 2009, 5434222, "Big Boss", 0.05, 4);
    softwareArchitectType s2;
    s2.setInfo("Sally Designer", "87878", "310-555-8888", 38, 'F', "Architect", "870,123", 2, 8, 2003);
    s2.setAll(6543422, "Big Boss", 0.08, 11);

    cout << "Loaded employees! Hit ENTER to compare phone numbers." << endl;
    pause();
    clear();

    //Comparing e1 and p1
    if (e1.getPhoneNumber() == p1.getPhoneNumber())
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") EQUALS " << p1.getName() << "(" << p1.getPhoneNumber() << ")\n"
             << endl;
    }
    else
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") DOES NOT EQUAL " << p1.getName() << "(" << p1.getPhoneNumber() << ")\n"
             << endl;
    }

    e1.setPhoneNumber("949-234-1234");
    //Comparing e1 and p1 after change
    if (e1.getPhoneNumber() == p1.getPhoneNumber())
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") EQUALS " << p1.getName() << "(" << p1.getPhoneNumber() << ")\n"
             << endl;
    }
    else
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") DOES NOT EQUAL " << p1.getName() << "(" << p1.getPhoneNumber() << ")\n"
             << endl;
    }

    //Comparing e1 and e2 before change
    if (e1 == e2)
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") EQUALS " << e2.getName() << "(" << e2.getPhoneNumber() << ")\n"
             << endl;
    }
    else
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") DOES NOT EQUAL " << e2.getName() << "(" << e2.getPhoneNumber() << ")\n"
             << endl;
    }

    e2.setPhoneNumber("949-234-1234");
    //Comparing e1 and e1 after change
    if (e1 == e2)
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") EQUALS " << e2.getName() << "(" << e2.getPhoneNumber() << ")\n"
             << endl;
    }
    else
    {
        cout << e1.getName() << "(" << e1.getPhoneNumber() << ") DOES NOT EQUAL " << e2.getName() << "(" << e2.getPhoneNumber() << ")\n"
             << endl;
    }

    cout << endl;
    cout << "Hit ENTER to proceed to add age step." << endl;
    pause();
    clear();

    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;
    e1.addAge(5);
    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;

    cout << e2.getName() << " is " << e2.getAge() << "years old." << endl;
    e2 = e2 + 2;
    cout << e2.getName() << " is " << e2.getAge() << "years old." << endl;

    cout << endl;
    cout << "Press ENTER to begin employee input." << endl;
    pause();
    clear();

    employeeType temp;
    cin >> temp;

    cout << "\nPrinting employee! Hit ENTER to continue." << endl;

    pause();
    clear();

    cout << temp;

    cout << endl;
    cout << "\nTesting Preincrement and postincrement of age! ENTER to continue..." << endl;
    pause();
    clear();

    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;
    cout << "PREINCREMENTING!!!" << endl;
    ++e1;
    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;

    cout << "Reset." << endl;

    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;
    cout << "POST INCREMENTING." << endl;
    employeeType e3 = e1++;
    int tempAge = e3.getAge();
    cout << e1.getName() << " is " << tempAge << "years old. Posting age again after this statement." << endl;
    cout << e1.getName() << " is " << e1.getAge() << "years old." << endl;

    pause();
    clear();

    return 0;
}
