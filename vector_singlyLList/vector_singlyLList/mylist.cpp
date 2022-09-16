#include "mylist.hpp"

#include <iostream>

template <typename T>
List<T>::List():head(nullptr), tail(nullptr)
{
}

template <typename T>
List<T>::~List()
{
    Node* current = head;
    
    while (current != nullptr) {
        //save the adress of next node
        Node* temporary = current -> next;
        //delete current
        delete current;
        
        //go to next node
        current = temporary;
    }
    //afterwards we still have head pointing to something
    //so we have to clear it
    head = nullptr;
    tail = nullptr;
    
    delete head;
    delete tail;

    
}


//
//template <typename T>
//void List<T>::push_front(const T& x)
//{
//    // Structure of a linked list
//    //  Head -> Element 1 -> Element 2 -> Element ... -> nullptr
//
//    // -> is an arrow operator, it lets you access the information inside the pointer
//
//    //create a new node
//    Node* temporaryNode = new Node(x, head->next);
//    
//    //assign the head to the new temporary node
//    head->next = temporaryNode;
//
//    temporaryNode = nullptr;
//
//    delete temporaryNode;
//
//    //if list has one element, set the tail equal to the head
//    if(size() == 1)
//    {
//        tail->next = head->next;
//    }
//}
//
//template <typename T>
//void List<T>::push_front(const T&& x)
//{
//    //create a new node
//    Node* temporaryNode = new Node(x, head->next);
//
//    //assign the head to the new temporary node
//    head ->next = temporaryNode;
//
//    temporaryNode = nullptr;
//
//    delete temporaryNode;
//
//    //if list has one element, set the tail equal to the head
//    if(size() == 1)
//    {
//        tail->next = head->next;
//    }
//
//    //maybe try
////    else
////    {
////        tail->next = nullptr;
////    }
//}
//
//template <typename T>
//void List<T>::pop_front()
//{
//    Node* temporaryNode = head->next;
//
//    //set head equal to the element after the one we removed
//    head->next = head->next->next;
//
//    delete temporaryNode;
//}
//
//
//template <typename T>
//void List<T>::clear()
//{
//    while (!empty())
//        pop_front();
//}







