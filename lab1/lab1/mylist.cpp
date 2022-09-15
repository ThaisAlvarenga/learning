#include "mylist.h"

#include <iostream>

List::List() {
	init();
}


List::~List() 
{
	clear();
	delete head;
	delete tail;
}


void List::push_front(const Payload& x)
{
	Node* tempNode = new Node(x, head->next);

	head->next = tempNode;

	tempNode = nullptr;

	delete tempNode;

	//the code below sets the tail pointer to point to the last element
	//this will be necessary if we want a pop/push back convenience method
	if (size() == 1)
		tail->next = head->next;
}


void List::push_front(const Payload&& x)
{
	Node* tempNode = new Node(x, head->next);

	head->next = tempNode;

	tempNode = nullptr;

	delete tempNode;

	//the code below sets the tail pointer to point to the last element
	//this will be necessary if we want a pop/push back convenience method
	if (size() == 1)
		tail->next = head->next;
}


void List::pop_front()
{
    Node* tempNode = head->next;

    head->next = head->next->next;
    
    delete tempNode;
    
}


int List::size() const
{
	int size = 0;
	Node *nextptr = head;

	while (nextptr->next != tail)
	{
		nextptr = nextptr->next;
		++size;
	}
	return size;
}


void List::print() const
{
	Node* nextptr = head;

	while (nextptr->next != tail)
	{
		printf("(%s)", nextptr->next->payload.name.c_str());
		nextptr = nextptr->next;
	}
	printf("\n");
}

void List::init()
{
	head = new Node();
	tail = new Node();
	head->next = tail; 
}

void List::clear()
{
	while (!empty())
		pop_front();
}

//IN-LAB

//remove element in the back
void List::pop_back()
{
    Node* current = head->next;
    Node* previous;
    
    delete tail;
//    
//    while(current->next != current->next->next || current->next == nullptr) {
//        
//        previous = current;
//        
//        current = current->next;
//        
//        current->payload.print();
//    }

    tail = previous;
    
    previous->next = nullptr;
    
    
}

// place an element in the back
void List::push_back(const Payload&& x)
{
    Node* newNode = new Node(x);
    //asuming the tail points to the node just before it
    Node* previous = tail->next;
    
    
    
    
    
    tail = tail-> next;
    newNode = nullptr;
    
}



