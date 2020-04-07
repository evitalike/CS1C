#include "queue.h"

// Created by Kevin Nguyen on 4/2/20

int main() {
    queue<int> q1;
    queue<string> q2;
    queue<double> q3;

    system("clear");
    

    /////  Q1 Portion

    cout << "-=-= Q1 =-=-\n" << endl;
    cout << " > Initializing..." << endl;
    q1.initialize();

    cout << " > Attempting to dequeue..." << endl;
    q1.dequeue();

    cout << " > Queuing [6] numbers..." << endl;
    q1.enqueue(2);
    q1.enqueue(42);
    q1.enqueue(123);
    q1.enqueue(23);
    q1.enqueue(6);
    q1.enqueue(765);

    cout << " > Printing numbers..." << endl;
    q1.print();

    cout << " > Dequeuing [4] numbers..." << endl;
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    cout << " > Printing numbers..." << endl;
    q1.print();

    cout << " > Queuing [5] numbers..." << endl;
    q1.enqueue(23);
    q1.enqueue(123);
    q1.enqueue(25);
    q1.enqueue(76);
    q1.enqueue(12);

    cout << " > Printing numbers..." << endl;
    q1.print();

    cout << " > Dequeuing [3] numbers..." << endl;
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    cout << " > Printing numbers..." << endl;
    q1.print();

    cout << endl; ////////// Q2 Portion


    cout << "-=-= Q2 =-=-\n" << endl;
    cout << " > Initializing..." << endl;
    q2.initialize();

    cout << " > Attempting to dequeue..." << endl;
    q2.dequeue();

    cout << " > Queuing [6] strings..." << endl;
    q2.enqueue("str1");
    q2.enqueue("str2");
    q2.enqueue("str3");
    q2.enqueue("str4");
    q2.enqueue("str5");
    q2.enqueue("str6");

    cout << " > Printing strings..." << endl;
    q2.print();

    cout << " > Dequeuing [4] strings..." << endl;
    q2.dequeue();
    q2.dequeue();
    q2.dequeue();
    q2.dequeue();

    cout << " > Printing strings..." << endl;
    q2.print();

    cout << " > Queuing [5] strings..." << endl;
    q2.enqueue("str7");
    q2.enqueue("str8");
    q2.enqueue("str9");
    q2.enqueue("str10");
    q2.enqueue("str11");

    cout << " > Printing strings..." << endl;
    q2.print();

    cout << " > Dequeuing [3] strings..." << endl;
    q2.dequeue();
    q2.dequeue();
    q2.dequeue();

    cout << " > Printing strings..." << endl;
    q2.print();

    cout << endl; /////// Q3 Portion

    cout << "-=-= Q3 =-=-\n" << endl;
    cout << " > Initializing..." << endl;
    q3.initialize();

    cout << " > Attempting to dequeue..." << endl;
    q3.dequeue();

    cout << " > Queuing [6] doubles..." << endl;
    q3.enqueue(123.5);
    q3.enqueue(52.5);
    q3.enqueue(92.5);
    q3.enqueue(18.5);
    q3.enqueue(2.5);
    q3.enqueue(2195.5);

    cout << " > Printing doubles..." << endl;
    q3.print();

    cout << " > Dequeuing [4] doubles..." << endl;
    q3.dequeue();
    q3.dequeue();
    q3.dequeue();
    q3.dequeue();

    cout << " > Printing doubles..." << endl;
    q3.print();

    cout << " > Queuing [5] doubles..." << endl;
    q3.enqueue(128.5);
    q3.enqueue(6.5);
    q3.enqueue(472.5);
    q3.enqueue(751.5);
    q3.enqueue(65.5);

    cout << " > Printing doubles..." << endl;
    q3.print();

    cout << " > Dequeuing [3] doubles..." << endl;
    q3.dequeue();
    q3.dequeue();
    q3.dequeue();

    cout << " > Printing doubles..." << endl;
    q3.print();

    cout << endl;

    return 0;
}