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
    //    else
    //    {
    //        tail->next = nullptr;
    //    }
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
        else
        {
            tail->next = nullptr;
        }
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

    while (nextptr-> next != tail)
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

void List::push_back(const Payload& x){
    // Create a New Node
        Node *node = new Node();

        // Iterate through the end of the list and set new node as next
        // of last node
        //  (currentent List)->(Node)

        // List is empty so new node is a head and return
        if(head == NULL) {
            head = node;
            return;
        }

    Node *current = head;
    
    int i = 0;
    int listSize = size();
    
    while(i != listSize)
    {
        current = current->next;
        ++i;
        
    }
    tail = current;
    
        // At this point current is the last node
        // Set node as the next of the last node
}

int List::capacity() const
{
    return size();
    
}

Payload List::operator[](int i) const{
    // Start at the head of the list
        Node* current = head;

        // Loop as long as we don't go of the end of the list and `n` is larger than zero
        // Also decrement `n` after checking its value
        while (current != nullptr && i -- > 0)
        {
            // Make `current` point to the next node in the list
            current = current->next;
        }

        // If `current` is a null pointer, then we have gone of the end of the list, return some default value
        // Otherwise return the value of node we were looking for
        return (current == nullptr ? 0 : current->payload);
}

