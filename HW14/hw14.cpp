#include "doublyLinkedList.h"

// Kevin Nguyen - oggunderscore@gmail.com

int main() {

    system("clear");
    //Create List Object
    doublyLinkedList<int> list1;

    //Initialize
    list1.initializeList();

    //Begin Insertion of 5 items
    list1.insert(5);
    list1.insert(214);
    list1.insert(2561);
    list1.insert(4213);
    list1.insert(2);

    cout << "LIST 1 - INTEGER" << endl;

    //Print the list
    cout << "\t-= Part 1 =-\n" << endl;
    list1.print();

    cout << "\t-= Part 2 =-\n" << endl;
    list1 = list1;
    cout << "Assignment Copy: ";
    list1.print();

    //list1 = new doublyLinkedList<int>(list1); // ??? Is this how you do it wtf?
    cout << "Constructor Copy: ";
    list1.print();

    cout << "\t-= Part 3 =-\n" << endl;

    doublyLinkedList<int> list1b;

    list1b = list1;
    cout << "Regular Copy of List1: ";
    list1b.print();
    cout << "Reverse Copy of List1: ";
    list1b.reverseSelf();
    list1b.print();

    cout << "\t-= Part 4 =-\n" << endl;

    cout << "Testing deleting empty list from list 1c..." << endl;
    doublyLinkedList<int> list1c;
    list1c.deleteNode(5); // Should say the list is empty.

    cout << "Testing deleting non-existant node from 1..." << endl;
    list1.deleteNode(999); // Should throw error, node not found to delete

    cout << "Deleting third node from both lists..." << endl;
    list1.deleteNode(2561); // 2561 should be the third node in the sequence.
    list1b.deleteNode(2561); // 2561 should be the third node in the sequence.
    list1.print();
    list1b.print();

    //list1.insertAt(999, 2); // Should Insert node 999 in slot 2 (third slot) ??? function doesnt exist yet??
    //list1b.insertAt(999, 2); // Should Insert node 999 in slot 2 (third slot) ??? function doesnt exist yet??


    /////////// DO ALL OF IT AGAIN BUT WITH DOUBLES.

    return 0;
    
}