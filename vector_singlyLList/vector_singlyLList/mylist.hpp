#pragma once

template <typename T>

struct List
{
private:
    struct Node
    {
        // pointer to next element in list
        T payload;
        Node *next;
        
        //constructors
        Node(const T & _payload, Node *_next = nullptr): payload(_payload), next(_next)
        {}
        Node(const T&& _payload, Node *_next = nullptr): payload(_payload), next(_next)
        {}
        
    };
    
    //declare variables for linked list
    
    Node *head; //points to begining of the list (front)
    Node *tail; //points to end of list (back)
    Node *mostRecent;
    
    void init();
    
public:
    //constructor
    List();
    //destructor
    ~List();
    
    void push_front(const T& x);
    void push_front(const T&& x);
    void pop_front();
    
    int size() const;
    int capacity() const;
    void print() const;
    
    void clear();
    
    void push_back(const T& n);
    
    bool empty() const
    {
        return size()==0;
    }
    
    T operator[](int i) const;
    
    
    
};
