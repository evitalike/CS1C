#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum Colors
{
    BLUE,
    GREEN,
    RED
};

typedef unsigned int size_t;

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void printNums(int nums[])
{
    for (int x = 0; x < 10; x++)
    {
        cout << " " << x + 1 << ". " << nums[x] << endl;
    }
}

void sumDigit(int num)
{

    system("clear");
    int dg1, dg2, dg3;
    dg1 = num / 100;
    dg2 = (num - (dg1 * 100)) / 10;
    dg3 = num - ((dg1 * 100) + (dg2 * 10));

    cout << "Sum: " << (dg1 + dg2 + dg3) << endl;
    pause();
}

void tripleDigit(int num)
{
    system("clear");
    int triple = num * 3;
    cout << "Tripled Number: " << triple << endl;
    pause();
}

void reverseDigit(int num)
{
    system("clear");

    int dg1, dg2, dg3;
    dg1 = num / 100;
    dg2 = (num - (dg1 * 100)) / 10;
    dg3 = num - ((dg1 * 100) + (dg2 * 10));

    int finalNum = (dg3 * 100) + (dg2 * 10) + dg1;

    cout << "Reversed: " << finalNum << endl;
    pause();
}
void generateList(int num[])
{
    system("clear");

    cout << "\nGenerating List..." << endl;
    for (int x = 0; x < 10; x++)
    {
        int randNum = rand() % 100;
        num[x] = randNum;
    }
    cout << "\nList generated." << endl;
    pause();
}

void sortList(int num[])
{
    system("clear");
    cout << "Sorting..." << endl;
    int min, temp;
    for (int x = 0; x < 10 - 1; x++)
    {
        min = x;
        for (int y = x + 1; y < 10; y++)
        {
            if (num[y] < num[min])
                min = y;
        }
        temp = num[min];
        num[min] = num[x];
        num[x] = temp;
    }
    cout << "Sorted." << endl;
    pause();
}

void viewList(int num[])
{
    sortList(num); // Sort the list prior to showing
    system("clear");
    cout << "Showing list..." << endl;
    printNums(num);
    pause();
}

void exportList(int num[])
{
    ofstream oFile;
    oFile.open("nums.txt");

    system("clear");
    cout << "Outputting to \"nums.txt\"..." << endl;
    for (int x = 0; x < 10; x++)
    {
        oFile << num[x] << endl;
        ;
    }
    cout << "Done!" << endl;
    oFile.close();
    pause();
}

void importList()
{
    ifstream iFile;
    iFile.open("nums.txt");
    system("clear");
    cout << "Reading \"nums.txt\"...\n"
         << endl;
    string temp;
    while (getline(iFile, temp))
    {
        cout << temp << endl;
    }
    pause();
    iFile.close();
}

int main()
{

    srand(time(NULL));

    int randomNum = rand() % 1000;

    int nums[10];

    bool exit = false;
    do
    {
        system("clear");
        int choice;
        cout << "Num: " << randomNum << endl;
        cout << " 1 > Sum the digits"
             << "\n 2 > Triple the number"
             << "\n 3 > Reverse the digits"
             << "\n 4 > Generate 10 random Numbers"
             << "\n 5 > Sort & Show list"
             << "\n 6 > Save list to file"
             << "\n 7 > Read File"
             << "\n 8 > Exit"
             << "\n"
             << "\nInput > ";

        cin >>
            choice;
        switch (choice)
        {
        case 1:
            sumDigit(randomNum);
            break;
        case 2:
            tripleDigit(randomNum);
            break;
        case 3:
            reverseDigit(randomNum);
            break;
        case 4:
            generateList(nums);
            break;
        case 5:
            viewList(nums);
            break;
        case 6:
            exportList(nums);
            break;
        case 7:
            importList();
            break;
        case 8:
            exit = true;
            system("clear");
            break;
        default:
            cout << "\nError: Invalid Input. Try again." << endl;
            pause();
            system("clear");
            break;
        }
    } while (exit != true);
}