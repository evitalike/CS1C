#include "queue.h"

//void q1Test(queue<class Type> q1) {
    
//}

int main() {
    queue<int> q1;
    queue<string> q2;
    queue<double> q3;

    system("clear");

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


    return 0;
}