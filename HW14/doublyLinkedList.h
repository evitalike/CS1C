#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
#include <cassert>

using namespace std;

template <class Type>
struct node
{
    Type info;
    node<Type> *next;
    node<Type> *back;
};

template <class Type>
class doublyLinkedList
{
public:
    const doublyLinkedList<Type> &operator=(const doublyLinkedList<Type> &);

    void initializeList();
    bool isEmptyList() const;
    void destroy();

    void print() const;
    void reversePrint() const;

    int length() const;
    Type front() const;
    Type back() const;

    bool search(const Type &searchItem) const;
    void insert(const Type &insertItem);
    void deleteNode(const Type &deleteItem);

    void reverseSelf();

    doublyLinkedList();
    doublyLinkedList(const doublyLinkedList<Type> &);
    ~doublyLinkedList();

protected:
    int count;
    node<Type> *first;
    node<Type> *last;

private:
    void copyList(const doublyLinkedList<Type> &otherList);
};

template <class Type>
void doublyLinkedList<Type>::reverseSelf() 
{

    /*
    node<Type> *temp = NULL;  
    node<Type> *current = first;  
    
    while (current != NULL)  
    {  
        node<Type> *oof = last;  
        cout << "Swapping " << current->info << " and " << oof->info << endl;
        temp = current->back;
        current->back = current->next;
        //current->next = prev;
        current->next = temp;
        //temp = current;

        current = current->back;
    }  
      
    if(temp != NULL )  
        first = temp->back;  

        */


    node<Type> *left = first; 
    node<Type> *right = last; 
  

    cout << "Before last is " << last->back->info << endl;

    while (left != right && left->back != right) { 
        cout << "Swapping " << left->info << " and " << right->info << endl;
        // Swap data of left and right pointer 
        swap(left->info, right->info); 
  
        // Advance left pointer 
        left = left->next; 
        cout << "Left is now " << left->info << endl;
  
        // Advance right pointer 
        right = right->back; 
        cout << "Right is now " << right->info << endl;
    } 
}

template <class Type>
const doublyLinkedList<Type> &doublyLinkedList<Type>::operator=(const doublyLinkedList<Type> &otherList)
{
    if (this != &otherList)
    {
        node<Type> *newNode;
        node<Type> *current;

        if (first != nullptr)
        {
            node<Type> *temp;

            while (first != nullptr)
            {
                temp = first;
                first = first->next;
                delete temp;
            }
            last = nullptr;
            count = 0;
        }

        if (otherList.first == nullptr)
        {
            first = nullptr;
            last = nullptr;
            count = 0;
        }
        else
        {
            current = otherList.first;
            count = otherList.count;

            first = new node<Type>;
            first->info = current->info;
            //this might break idk
            first->next = nullptr;

            last = first;

            current = current->next;

            while (current != nullptr)
            {
                newNode = new node<Type>;
                newNode->info = current->info;
                newNode->next = nullptr;

                last->next = newNode;
                last = newNode;

                current = current->next;
            }
        }
    }
    return *this;
}

template <class Type>
doublyLinkedList<Type>::~doublyLinkedList()
{
    node<Type> *temp;

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    last = nullptr;
    count = 0;
}

template <class Type>
doublyLinkedList<Type>::doublyLinkedList(const doublyLinkedList<Type> &otherList)
{
    first = nullptr;

    node<Type> *newNode;
    node<Type> *current;

    if (first != nullptr)
    {
        node<Type> *temp;

        while (first != nullptr)
        {
            temp = first;
            first = first->next;
            delete temp;
        }
        last = nullptr;
        count = 0;
    }

    if (otherList.first == nullptr)
    {
        first = nullptr;
        last = nullptr;
        count = 0;
    }
    else
    {
        current = otherList.first;
        count = otherList.count;

        first = new node<Type>;
        first->info = current->info;
        first->next = nullptr;

        last = first;

        current = current->next;

        while (current != nullptr)
        {
            newNode = new node<Type>;
            newNode->info = current->info;
            newNode->next = nullptr;

            last->next = newNode;
            last = newNode;

            current = current->next;
        }
    }
}

template <class Type>
doublyLinkedList<Type>::doublyLinkedList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

template <class Type>
bool doublyLinkedList<Type>::isEmptyList() const
{
    return (first == nullptr);
}

template <class Type>
void doublyLinkedList<Type>::destroy()
{
    node<Type> *temp;

    while (first != nullptr)
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    last = nullptr;
    count = 0;
}

template <class Type>
void doublyLinkedList<Type>::initializeList()
{
    destroy();
}

template <class Type>
int doublyLinkedList<Type>::length() const
{
    return count;
}

template <class Type>
void doublyLinkedList<Type>::print() const
{
    struct node<Type> *current;

    current = first;

    while (current != nullptr)
    {
        cout << current->info << "  ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <class Type>
void doublyLinkedList<Type>::reversePrint() const
{
    node<Type> *current;

    current = last;

    while (current != nullptr)
    {
        cout << current->info << " ";
        current = current->back;
    }
    std::cout << std::endl;
}

template <class Type>
bool doublyLinkedList<Type>::
    search(const Type &searchItem) const
{
    bool found = false;
    node<Type> *current;

    current = first;

    while (current != nullptr && !found)
        if (current->info >= searchItem)
            found = true;
        else
            current = current->next;

    if (found)
        found = (current->info == searchItem);

    return found;
}

template <class Type>
Type doublyLinkedList<Type>::front() const
{
    assert(first != nullptr);

    return first->info;
}

template <class Type>
Type doublyLinkedList<Type>::back() const
{
    assert(last != nullptr);

    return last->info;
}

template <class Type>
void doublyLinkedList<Type>::insert(const Type &insertItem)
{
    node<Type> *current;
    node<Type> *trailCurrent;
    node<Type> *newNode;
    bool found;

    newNode = new node<Type>;
    newNode->info = insertItem;
    newNode->next = nullptr;
    newNode->back = nullptr;

    if (first == nullptr)
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found)
        {
            trailCurrent = current;
            current = current->next;
        }

        if (current == first)
        {
            first->back = newNode;
            newNode->next = first;
            first = newNode;
            count++;
        }
        else
        {
            if (current != nullptr)
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                newNode->next = current;
                current->back = newNode;
            }
            else
            {
                trailCurrent->next = newNode;
                newNode->back = trailCurrent;
                last = newNode;
            }

            count++;
        }
    }
}

template <class Type>
void doublyLinkedList<Type>::deleteNode(const Type &deleteItem)
{
    node<Type> *current;
    node<Type> *trailCurrent;

    bool found;

    if (first == nullptr)
        cout << "Cannot delete from an empty list." << endl;
    else if (first->info == deleteItem)

    {
        current = first;
        first = first->next;

        if (first != nullptr)
            first->back = nullptr;
        else
            last = nullptr;

        count--;

        delete current;
    }
    else
    {
        found = false;
        current = first;

        while (current != nullptr && !found)
            if (current->info >= deleteItem)
                found = true;
            else
                current = current->next;

        if (current == nullptr)
            cout << "The item to be deleted is not in "
                 << "the list." << endl;
        else if (current->info == deleteItem)

        {
            trailCurrent = current->back;
            trailCurrent->next = current->next;

            if (current->next != nullptr)
                current->next->back = trailCurrent;

            if (current == last)
                last = trailCurrent;

            count--;
            delete current;
        }
        else
            cout << "The item to be deleted is not in list."
                 << endl;
    }
}

#endif