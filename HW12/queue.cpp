#include "queue.h"
#include <iostream>

using namespace std;

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
void queue<Type>::initializeQueue()
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
void queue<Type>::enqueue(Type &newElement)
{
    if (!isFull())
    {
        end = (end + 1) % capacity;
        size++;
        list[end] = newElement;
    }
    else
    {
        cout << "Error: Cannot add, queue is full." << endl;
    }
}

template <class Type>
void queue<Type>::dequeue()
{
    if (!isEmpty())
    {
        size--;
        begin = (begin + 1) % capacity;
    }
    else
    {
        cout << "Error: Cannot remove, queue is empty." << endl;
    }
}

template <class Type>
void queue<Type>::print()
{
    queue<Type> temp(*this);
    while (!temp.isEmpty())
    {
        cout << temp.front() << " ";
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
