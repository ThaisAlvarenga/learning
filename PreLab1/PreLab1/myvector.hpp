#pragma once
#include <stdio.h>
#include "payload.hpp"

class Vector
{
    public:
        
        //Task 1a
        int size; //hold how many elements are in the dynamic array
        int capacity; //how many elements could be in array
        Payload* array; //array that will hold elements
    
        //constructors
        Vector();
        Vector(int setSize);
        //copy constructor (l value reference)
        Vector(const Vector& copyVector);
    
        //move constructor (r value reference)
        Vector(Vector&& movedVector);
    
        //destroyer
        ~Vector();
    
        //copy assignment operator
        Vector& operator = (const Vector& copyVector);
        //move assignment operator
        Vector& operator = (Vector&& moveVector);
    
        //Task 2a
        //adds a new element to the array
        void push_back(Payload element);
        void pop_back();
    
        //couldn't declare it as size() because XCode gave an error since the size variable has the same name
        //Task 3a
        int Size() const;
        int Capacity() const;
    
        //Task 4a
        void print() const;
    
        void pop_front();
        void push_front();
    
        void operator
    
        

    
};
