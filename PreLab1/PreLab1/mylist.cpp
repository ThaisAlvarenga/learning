#include "mylist.hpp"
#include "payload.hpp"

//Node::Node(Payload _element): element(_element), next(nullptr)
//{}

Node::Node(Payload _element, Node* _next) : element(_element), next(_next){}

List::List(): head(nullptr){}

List::~List()
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
}


void List::push_front(Payload newElement)
{
    // Structure of a linked list
    //  Head -> Element 1 -> Element 2 -> Element ... -> nullptr
    
    // -> is an arrow operator, it lets you access the information inside the pointer
    
    Node* temporary = new Node(newElement);
    temporary -> element = newElement;
    
    temporary -> next = head;
    head = temporary;
    
    
    //lol. this is not working
    
//    if(head == nullptr)
//    {
//        head = temporary;
//    }
//    else{
//        current = head;
//        while(current->next != nullptr)
//        {
//            //go through the list until you reach current (last node which always points to nullptr)
//            current = current->next;
//        }
//        current->next = temporary;
//
//    }
//
    
    
}


void List::pop_front()
{
    if (head == NULL)
    {
        //node is empty
//        std::cout << "node is empty"<< std::endl;
    }
    else{
        // Move the head pointer to the next node
        Node* temp = head;
        head = head->next;
     
        delete temp;
        
    }
    

}

int& List::size() const
{
    
    Node *current = head;

    int lenght = 0;

    if(head == nullptr){
        lenght = 0;
    }

    while(current !=nullptr)
    {
        lenght++;
        current = current->next;
    }

    return lenght;
}

//      Tried this for the size
//    if(head == nullptr){
//        lenght = 0;
//        current = head;
//        return lenght;
//    }
//    else{
//        return 1 + size(current->next);
//    }
//}

    

void List::print() const
{
    Node* current = head;
    
    while(current !=nullptr)
    {
        current->element.print();
        current = current->next;
    }
    
}
