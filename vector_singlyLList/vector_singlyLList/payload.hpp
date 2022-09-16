#pragma once

#include <string>

using std::string;

struct Payload
{
    //public attributes
    static int counter, dead;
    int id;
    string name;

    //constructors
    Payload(string n = "") : id(++counter), name(n) { say_born(); }
    Payload(const char* n) : Payload(string(n)) {}

    //destructor
    ~Payload() { say_die(); ++dead; }
    
    //copy constructor
    Payload(const Payload& x) : id(++counter), name(x.name) { say_born(); }
    void operator=(const Payload& x) { name = x.name; }

    //move semantic
    Payload(Payload && x) noexcept : id(++counter), name(x.name) { say_born(); }
    Payload& operator=(const Payload && x) noexcept { name = x.name; return *this; }

    //housekeeping functions
    void say_born() const;
    void say_die() const;
    void print() const;
};


struct Leaks
{
    ~Leaks();
};
