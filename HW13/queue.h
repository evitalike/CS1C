#ifndef QUEUE_H
#define QUEUE_H


#include <iostream>
#include <cassert>

using namespace std;

template <class Type>
class queue
{
public:
    
    //Functs
    bool isEmpty();
    bool isFull();
    int currentSize();
    void initialize();
    Type front();
    Type back();
    void enqueue(const Type &queueElement);
    void dequeue();
    void print();

    // Const
    queue();
    queue(int);
    queue(const queue<Type> &otherQueue);
    ~queue();

private:
    int capacity, size, begin, end;
    Type *list;
};

template <class Type>
bool queue<Type>::isEmpty()
{
    return (size == 0);
}

template <class Type>
bool queue<Type>::isFull()
{
    return (size == capacity);
}

template <class Type>
int queue<Type>::currentSize()
{
    return size;
}

template <class Type>
void queue<Type>::initialize()
{
    begin = 0;
    end = capacity - 1;
    size = 0;
}

template <class Type>
Type queue<Type>::front()
{
    assert(!isEmpty());
    return list[begin];
}

template <class Type>
Type queue<Type>::back()
{
    assert(!isEmpty());
    return list[end];
}

template <class Type>
void queue<Type>::enqueue(const Type &newElement)
{
    try
    {
        if (isFull())
        {
            throw size;
        }
        end = (end + 1) % capacity;
        size++;
        list[end] = newElement;
    }
    catch(int exceptNum)
    {
        cout << "Error: Cannot add, queue is full (" << exceptNum << "/" << capacity << ")." << endl;
    }
}

template <class Type>
void queue<Type>::dequeue()
{

    try
    {
        if (isEmpty())
        {
            throw size;
        }
        size--;
        begin = (begin + 1) % capacity;
    }
    catch(int exceptNum)
    {
        cout << "Error: Cannot remove, queue is empty (" << exceptNum << "/" << capacity << ")." << endl;
    }
}

template <class Type>
void queue<Type>::print()
{
    queue<Type> temp(*this);
    cout << "       ";
    while (!temp.isEmpty())
    {
        cout << temp.front() << "  ";
        temp.dequeue();
    }
    cout << endl;
}

template <class Type>
queue<Type>::queue()
{
    capacity = 10;
    begin = 0;
    end = capacity - 1;
    size = 0;
    list = new Type[capacity];
}

template <class Type>
queue<Type>::queue(int cap)
{
    capacity = cap;
    begin = 0;
    end = capacity - 1;
    size = 0;
    list = new Type[capacity];
}

template <class Type>
queue<Type>::~queue()
{
    delete[] list;
}

template <class Type>
queue<Type>::queue(const queue<Type> &otherQueue)
{
    list = NULL;

    delete[] list;

    capacity = otherQueue.capacity;
    size = otherQueue.size;
    begin = otherQueue.begin;
    end = otherQueue.end;

    list = new Type[capacity];

    for (int i = 0; i < otherQueue.capacity; i++)
    {
        list[i] = otherQueue.list[i];
    }
}


#endif