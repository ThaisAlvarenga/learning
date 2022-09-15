#pragma once
#include "payload.h"

struct Vector
{
    Vector();
    Vector(int CAP);
    ~Vector();

    Payload* payloads;
    int CAPACITY = 1;
    int v_size = 0;

    void push_back(const Payload && x);
    void push_back(const Payload& x);
    void pop_back();

    int size() const;
    int capacity() const;

    void reserve(int newCapacity);
    void resize(int newSize);
    void print() const;
    
    void push_front();
    void pop_front();

    int operator[] (int i);
    
};

