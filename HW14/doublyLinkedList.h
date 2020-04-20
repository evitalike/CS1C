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
    node<Type> *prev;
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

    int length() const;
    Type front() const;
    Type prev() const;

    bool search(const Type &searchItem) const;
    void insertLast(const Type &insertItem);
    void insert(const Type &insertItem);
    void insertMiddle(const Type &insertItem);
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
        temp = current->prev;
        current->prev = current->next;
        //current->next = prev;
        current->next = temp;
        //temp = current;

        current = current->prev;
    }  
      
    if(temp != NULL )  
        first = temp->prev;  

        */

    node<Type> *left = first; 
    node<Type> *right = last; 
  
    while (left != right && left->prev != right) { 
        // Swap data of left and right pointer 
        swap(left->info, right->info); 
  
        // Advance left pointer 
        left = left->next; 
  
        // Advance right pointer 
        right = right->prev; 
    } 
}

template <class Type>
const doublyLinkedList<Type> &doublyLinkedList<Type>::operator=(const doublyLinkedList<Type> &otherList)
{
    node<Type> *current;

    first = nullptr;
    last = nullptr;

    count = otherList.count;

    current = otherList.first;

    while(current != nullptr)
    {
        insertLast(current->info);
        current = current->next;
    }

return *this;
}
/*
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
}*/

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
    cout << endl;
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
Type doublyLinkedList<Type>::prev() const
{
    assert(last != nullptr);

    return last->info;
}

template <class Type>
void doublyLinkedList<Type>::insertMiddle(const Type &insertItem)
{
    node<Type> *temp = nullptr;
    node<Type> *current = first; // Test to insert after the first node
    node<Type> *newNode = (node<Type>*)malloc(sizeof(node<Type>));
    newNode->info = insertItem;
    
    int mid = (count % 2 == 0) ? (count/2) : ((count+1)/2);      
          
    //Iterate through list till current points to mid position  
    for(int i = 1; i < mid; i++){  
        current = current->next;  
    }

    temp = current->next;

    temp->prev = newNode;

    current->next = newNode;

    newNode->prev = current;

    newNode->next = temp;

    temp->prev = newNode;
}

template <class Type>
void doublyLinkedList<Type>::insertLast(const Type &insertItem)
{
    /* 1. allocate node */
    node<Type> *newNode = (node<Type>*)malloc(sizeof(node<Type>)); 
  
    /* 2. put in the data  */
    newNode->info = insertItem; 
  
    /* 3. This new node is going to be the last node, so 
          make next of it as NULL*/
    newNode->next = nullptr; 
  
    /* 4. If the Linked List is empty, then make the new 
          node as head */
    if (first == NULL) { 
        newNode->prev = NULL; 
        first = newNode; 
        last = newNode;
        count++;
        return; 
    } 
  
    /* 5. Else traverse till the last node */
    //while (finalNode->next != NULL) 
    //    finalNode = finalNode->next; 
  
    /* 6. Change the next of last node */
    last->next = newNode; 
    //cout << last->info << " -> " << newNode->info << endl;
  
    /* 7. Make last node as previous of new node */
    newNode->prev = last; 
    //cout << last->info << " <- " << newNode->info << endl;

    last = newNode;

    count++;

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
    newNode->prev = nullptr;

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
            first->prev = newNode;
            newNode->next = first;
            first = newNode;
            count++;
        }
        else
        {
            if (current != nullptr)
            {
                trailCurrent->next = newNode;
                newNode->prev = trailCurrent;
                newNode->next = current;
                current->prev = newNode;
            }
            else
            {
                trailCurrent->next = newNode;
                newNode->prev = trailCurrent;
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
            first->prev = nullptr;
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
            trailCurrent = current->prev;
            trailCurrent->next = current->next;

            if (current->next != nullptr)
                current->next->prev = trailCurrent;

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
