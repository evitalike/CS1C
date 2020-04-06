#ifndef QUEUE_H
#define QUEUE_H


template <class Type>
class queue
{
public:
    
    //Functs
    bool isEmpty();
    bool isFull();
    int currentSize();
    void initializeQueue();
    Type front();
    Type back();
    void enqueue(Type &queueElement);
    void dequeue();
    void print();

    // Const
    queue();
    queue(const queue<Type> &otherQueue);
    ~queue();

private:
    int capacity, size, begin, end;
    Type *list;
};

#endif