#include "container.h"
#include "item.h"

/*
Name: Kevin Nguyen
ID: 1065227
Email: oggunderscore@gmail.com
Class: CS1C
Project: HW7 - Pointers & Dynamic
*/


static void pause()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

static void clear()
{
    system("clear");
}

int main() {

    container myInv;

    myInv.purchase();
    myInv.printReceipt();

    cout << "\n\n";

    container newInv(myInv);

    newInv.printInventory();

    pause();
    clear();

    return 0;
}
