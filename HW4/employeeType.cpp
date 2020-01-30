#include "employeeType.h"
#include "dateType.cpp"
#include "mainHeader.h"

//Overloader
bool employeeType::operator==(employeeType &other)
{
    if (phoneNumber == other.getPhoneNumber())
        return true;
    else
        return false;
}

int employeeType::operator+(int add)
{
    age += add;
    return age;
}
void employeeType::operator=(int age1)
{
    age = age1;
}

ostream &operator<<(ostream &os, employeeType &other)
{
    other.print();
    return os;
}

istream &operator>>(istream &is, employeeType &other)
{
    string tempString;
    int tempInt;
    char tempChar;

    system("clear");
    cout << "  Input Name > ";
    getline(cin, tempString);
    other.setName(tempString);

    system("clear");
    cout << "  Input ID > ";
    getline(cin, tempString);
    other.setID(tempString);

    system("clear");
    cout << "  Input Phone Number > ";
    getline(cin, tempString);
    other.setPhoneNumber(tempString);

    system("clear");
    cout << "  Input Age > ";
    cin >> tempInt;
    other.setAge(tempInt);

    system("clear");
    cout << "  Input Gender > ";
    cin >> tempChar;
    other.setGender(tempChar);

    system("clear");
    cout << "  Input Job Title > ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tempString);
    other.setJobTitle(tempString);

    system("clear");
    cout << "  Input Salary > ";
    cin >> tempString;
    other.setSalary(tempString);

    system("clear");
    cout << "  Input Hire Date > ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tempString);
    int month, day, year;
    month = stoi(tempString.substr(0, 2)); // 02/02/2000
    day = stoi(tempString.substr(3, 2));
    year = stoi(tempString.substr(6, 4));
    cout << month << "/" << day << "/" << year << endl;
    other.setHireDate(month, day, year);
    system("clear");

    return is;
}

employeeType &operator++(employeeType &other)
{
    other.setAge(other.getAge() + 1);
    return other;
}

employeeType operator++(employeeType &other, int)
{
    employeeType temp = other;
    ++other;
    return temp;
}

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
void employeeType::addAge(int age1)
{
    age += age1;
    cout << "Added " << age1 << "years to " << name << endl;
}

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