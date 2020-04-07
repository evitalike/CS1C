#include "queue.h"

// Created by Kevin Nguyen on 4/2/20

int main() {
    queue<int> q1(3);

    system("clear");

    cout << "-=-= Q1 =-=-\n" << endl;
    cout << " > Initializing with capacity of 3..." << endl;
    q1.initialize();

    cout << " > Attempting to dequeue [1]..." << endl;
    q1.dequeue();

    cout << " > Queuing [3] numbers..." << endl;
    q1.enqueue(2);
    q1.enqueue(42);
    q1.enqueue(123);

    cout << " > Printing numbers..." << endl;
    q1.print();

    cout << " > Queuing [1] numbers..." << endl;
    q1.enqueue(234);

    return 0;
}