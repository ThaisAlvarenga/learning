#include <iostream>
#include <chrono>

#include "myvector.h"
#include "mylist.h"

using std::cout;

template <class C> void show(const C & v)
{
    cout << "size/cap: " << v.size() << '/'
    << v.capacity() << ": "; v.print(); cout
    << '\n';
}

template <class C> void fill_back(C & v, int n)
{
    for(int i =0; i< n; i++)
    {
        //adding a number to the name of the object
        string number = std::to_string(i);
        string name = "yes";
        name += number;
    
        v.push_back(name);
    }
    cout<< "initial: ";
    v.print();
}

template <class C> void fill_front(C & v, int n)
{
    for(int i = 0; i < n; i++)
    {
        
        v.push_front("hello");
    }
    
}

template <class C> void remove_back(C & v)
{
    v.pop_back();
    cout<< "removed:";
    v.print();
}

template <class C> void remove_front(C & v)
{
    v.pop_front();
}

//here we use the operator
template <class C> void modify(C & v)
{
    int mysize = v.size();

    //for every element in v
    for(int i = 0; i < mysize; i++)
    {
        string temporary = v[i].name;
        char newname[mysize-1];
        
        //for every character in v[i]
        for(int j = 0; j < temporary.size() ; j++)
        {
            char c = temporary[j];
            
            if(j != 0)
            {
                newname[j-1] = c;
            }
        }
        
        v[i].name = newname;
    }

}

template <class C> void print(C & v)
{
    cout << "print: ";
    
    int mySize = v.size();
    for(int i = 0; i < mySize; i++)
    {
        v[i].print();
    }
}

template <class Container> void run(string message, int n)
{
    cout << message << '\n';
    Container c;
    fill_back(c, n);
//    show(c);
//    modify(c);
//    show(c);
//    modify(c);
//    show(c);
    modify(c);
//    show(c);
//    remove_back(c);
//    show(c);
//    fill_front(c,n);
//    show(c);
    print(c);
//    remove_front(c);
//    show(c);
    cout << '\n';
}

int main()
{
    
    List v;
    v.push_back("hello");
    v.push_back("how");
    v.print();

    
//    run<Vector>("Vector", 10);
//    run<List>("List", 10);

//    s.print
    
    
}
