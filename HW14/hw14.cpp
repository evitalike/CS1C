#include "doublyLinkedList.h"

// Kevin Nguyen - oggunderscore@gmail.com

int main() {

    system("clear");
 
    //Create List Object
    doublyLinkedList<int> list1;

    //Initialize
    list1.initializeList();

    //Begin Insertion of 5 items
    list1.insertLast(5);
    list1.insertLast(214);
    list1.insertLast(2561);
    list1.insertLast(4213);
    list1.insertLast(2);

    cout << "LIST 1 - INTEGER" << endl;

    //Print the list
    cout << "\n\t-= Part 1 =-\n" << endl;
    list1.print();
    

    cout << "\n\t-= Part 2 =-\n" << endl;

    doublyLinkedList<int> listCopy;
    listCopy = list1;
    cout << "Assignment Copy: ";
    listCopy.print();

    cout << "Constructor Copy: ";
    doublyLinkedList<int> listConst(list1);
    listConst.print();

    cout << "\n\t-= Part 3 =-\n" << endl;

    doublyLinkedList<int> list1b;

    list1b = list1;
    cout << "Current List 2: ";
    list1b.print();
    cout << "Reverse Copy of List 2: ";
    list1b.reverseSelf(); // was list1b

    list1b.print();


    
    cout << "\n\t-= Part 4 =-\n" << endl;

    cout << "\nTesting deleting empty list from list 1c..." << endl;
    doublyLinkedList<int> list1c;
    list1c.deleteNode(5); // Should say the list is empty.

    cout << "\nTesting deleting non-existant node from 1..." << endl;
    list1.deleteNode(999); // Should throw error, node not found to delete

    cout << "\nDeleting third node from both lists..." << endl;
    list1.deleteNode(2561); // 2561 should be the third node in the sequence.
    list1b.deleteNode(2561); // 2561 should be the third node in the sequence.
    list1.print();
    list1b.print();

    cout << "\n\t-= Part 5 =-\n" << endl;

    cout << "\nInserting [999] into the middle..." << endl;
    list1.insertMiddle(999);
    list1b.insertMiddle(999);
    list1.print();
    list1b.print();




    //Create List Object
    doublyLinkedList<double> list1D;

    //Initialize
    list1D.initializeList();

    //Begin Insertion of 5 items
    list1D.insertLast(5.5);
    list1D.insertLast(214.5);
    list1D.insertLast(2561.9);
    list1D.insertLast(4213.5);
    list1D.insertLast(2.5);

    cout << "\n\t\tLIST 2 - DOUBLES" << endl;

    //Print the list
    cout << "\n\t-= Part 1 =-\n" << endl;
    list1D.print();
    

    cout << "\n\t-= Part 2 =-\n" << endl;

    doublyLinkedList<double> listDCopy;
    listDCopy = list1D;
    cout << "Assignment Copy: ";
    listDCopy.print();

    cout << "Constructor Copy: ";
    doublyLinkedList<double> listDConst(list1D);
    listDConst.print();

    cout << "\n\t-= Part 3 =-\n" << endl;

    doublyLinkedList<double> list1Db;

    list1Db = list1D;
    cout << "Current List 2: ";
    list1Db.print();
    cout << "Reverse Copy of List 2: ";
    list1Db.reverseSelf(); // was list1Db

    list1Db.print();


    
    cout << "\n\t-= Part 4 =-\n" << endl;

    cout << "\nTesting deleting empty list from list 1c..." << endl;
    doublyLinkedList<double> list1Dc;
    list1Dc.deleteNode(5.9); // Should say the list is empty.

    cout << "\nTesting deleting non-existant node from 1..." << endl;
    list1D.deleteNode(999.9); // Should throw error, node not found to delete

    cout << "\nDeleting third node from both lists..." << endl;
    list1D.deleteNode(2561.9); // 2561 should be the third node in the sequence.
    list1Db.deleteNode(2561.9); // 2561 should be the third node in the sequence.
    list1D.print();
    list1Db.print();

    cout << "\n\t-= Part 5 =-\n" << endl;

    cout << "\nInserting [999.9] into the middle..." << endl;
    list1D.insertMiddle(999.9);
    list1Db.insertMiddle(999.9);
    list1D.print();
    list1Db.print();

    return 0;
    
}
