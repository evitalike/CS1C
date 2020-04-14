#include <iostream>

using namespace std;

int smallestDigit(int x) {
    // 1234
    int x1 = x / 1000; // 1
    int x2 = (x - (x1*1000)) / 100; // 2
    int x3 = (x - (x1*1000) - (x2*100)) / 10; // 3
    int x4 = (x - (x1*1000) - (x2*100)  - (x3*10)); // 4

    cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;

    int smallestInt = x1;

    if (x2 < smallestInt) {
        smallestInt = x2;
    }
    if (x3 < smallestInt) {
        smallestInt = x3;
    } 
    if (x4 < smallestInt) {
        smallestInt = x4;
    }

    return smallestInt;
}

bool isPrime(int x) {
    bool result = true;
    for(int i = 2; i <= x / 2; i++) {
       if(x % i == 0) {
          result = false;
          break;
       }
    }
    return result;
}

int main() {

    int failedCounter = 0, x;
    bool validInput = false;

    while (validInput != true) {
        if (failedCounter < 5) {
            system("clear");
            cout << "Failed Attempts: " << failedCounter << endl;
            cout << "Insert Your Number greater than 1000: ";
            cin >> x;

            if (x >= 1000) {
                validInput = true;
            } else {
                validInput = false;
                failedCounter++;
            }
        } else {
            cout << "You have exceeded the amount of failed attempts. Please try again." << endl;
            return 0;
        }
    }

    // Continues here.

    cout << "The smallest digit of " << x << " is: " << smallestDigit(x) << endl;


    cout << "Printing prime numbers from 1-100" << endl;
    for (int y = 1; y <= 100; y++) {
        if (isPrime(y)) {
            cout << y << " ";
        }
    }
    cout << endl;

    return 0;
}