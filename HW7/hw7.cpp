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

    clear();
    container inventory; // Create the inventory

    //Make purchases and print it.
    inventory.printInventory();
    inventory.purchase();
    inventory.printReceipt();

    cout << "\nPress any key to proceed to show remaining inventory...\n" << endl;
    pause();
    clear();

    //Copy inventory
    container newInventory(inventory);

    //Print copied inventory
    newInventory.printInventory();

    pause();
    clear();

    return 0;
}
