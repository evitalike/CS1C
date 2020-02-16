#include <iostream>
#include <string>

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW6 - Recursion
*/

using namespace std;

void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void clear()
{
    system("clear");
}

void reverse(string str1, int start, int end)
{
    string final, before, after, middle;
    char a, b;

    if (end != start) {
        //cout << "S: " << start << " E: " << end << endl; // DEBUG
        if (!((end - start) <= 0)) {
            before = str1.substr(0, start);
            middle = str1.substr(start + 1, (end - start) - 1);
            after = str1.substr(end + 1, str1.length() - end);
            a = str1.at(start);
            b = str1.at(end);
            final = before + b + middle + a + after;
            reverse(final, start + 1, end - 1);
                
        } 
    }
    if (!((end - start) <= 0)) {
        if ((end - start) <= 2) { // 2
            cout << " > " << final << endl;
        }
    }
}

void reverseForLoop(string final, int start, int end) 
{
    string before, middle, after;
    char a, b;
    int iterations = ((end - start) / 2) + 1;
    for (int x = 0; x < iterations; x++)
    {
        if (!((end - start) <= 1)) 
        {
            before = final.substr(0, start);
            middle = final.substr(start + 1, (end - start) - 1);
            after = final.substr(end + 1, final.length() - end);
            a = final.at(start);
            b = final.at(end);
            final = before + b + middle + a + after;
            start++;
            end--;
        }
        
    }
    cout << " > " << final << endl;
}

int main()
{
    clear();
    string sample = "abcdefghijklmnopqrstuvwxyz";

    cout << "Starting String: " << sample << endl;
    cout << endl;

    cout << " > > > Reversed by Recursion < < <\n" << endl;

    reverse(sample, 11, 18);

    reverse(sample, 4, 22);

    reverse(sample, 0, 25);

    cout << endl;

    cout << " > > > Reversed by For Loop < < <\n" << endl;

    reverseForLoop(sample, 11, 18);

    reverseForLoop(sample, 4, 22);

    reverseForLoop(sample, 0, 25);

    pause();
    clear();

    return 0;
}
