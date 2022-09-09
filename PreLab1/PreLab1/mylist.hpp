#define mylist_hpp

#pragma once
#include <stdio.h>
#include "payload.hpp"

struct Node
{
    Payload element;
    Node* next;
    
    
    Node(Payload _element, Node* _next = nullptr);
    
};

//Linked list
struct List
{
    public:
        //head pointer of the list points to a node (first node in list)
        Node* head;
    
        //TASK 1b
        //constructor
        List();
    
        //why can't I have a destroyer for the linked list? It crashed lol
        // it was because I have to define the destroyer in mylist.cpp
    
        //destroyer
        ~List();
    
        // TASK 2b
        void push_front(Payload newElement);
        void pop_front();
    
        int& size() const;
    
        void print() const;
};

