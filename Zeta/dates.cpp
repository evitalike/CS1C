#include <iostream>
#include <string>

using namespace std;

int main() {

    /*
    Program prompts the user to input a day of the week. 
    If the input is not a day of the week, prompt them again.
    Give the user five additional chances to enter a valid day of the week.
    */

   string dayOfWeek;
   int failCounter = 0;
   bool validDay = false;

    while (validDay != true) {

        cout << "Input day of week: ";
        getline(cin, dayOfWeek);

        if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" || dayOfWeek == "Saturday" || dayOfWeek == "Sunday") {
            validDay = true;
        } else {
            if (failCounter == 5) {
                cout << "Failed Attempts has hit 5. Exiting." << endl;
                return 0;
            } else {
                validDay = false;
                failCounter++;
            }
        }

    }



   /*
    Create a function called sleepIn that takes the day of the 
    week as a string as a parameter. 
    It returns true if it is the weekend and false otherwise.
   */


    return 0;
}