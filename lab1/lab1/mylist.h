#pragma once

#include "payload.h"


struct List
{
private:
    struct Node
    {
        Payload payload;
        Node *next;

        Node(const Payload & pl = Payload{}, Node *n = nullptr)
            : payload(pl), next(n)
        {
        }

        Node(const Payload&& pl, Node *n = nullptr)
            : payload(pl), next(n)
        {
        }

    };

    Node *head;
    Node *tail;
    Node *most_recent;
    void init(); 
    ;

public:
    List();
    ~List();

    void push_front(const Payload&);
    void push_front(const Payload&& x);
    void pop_front();

    int size() const;
    void print() const;
    
    void clear();

    bool empty() const { return size() == 0;}
    
    void push_back(const Payload&& x);
    void pop_back();
    
};


