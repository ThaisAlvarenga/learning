#include <iostream>

#include "myvector.h"
#include "mylist.h"

using std::cout;

int main()
{

    auto showVector = [](const Vector& v)
    {
        cout << "Vector size/capacity: " << v.size() << '/' << v.capacity() << '\n';
        v.print(); cout << '\n';
    };

    auto showList = [](const List& s)
    {
        cout << "List size: " << s.size() << '\n';
        s.print(); cout << '\n';
    };

    {
        Vector v;

        v.push_back("apple");
        showVector(v);
        v.push_back("pear");
        v.push_back("banana");
        v.push_back("orange");
        v.push_back("cocoa");
        std::cerr<< "mistak /n";
        showVector(v);
        v.pop_back();
        showVector(v);
    }

    cout << '\n';

    {
        List s;

        s.push_front("apple");
        s.push_front("pear");
        s.push_front("banana");

        showList(s);
        s.pop_front();
        s.push_back("Thais");
        showList(s);
        
    }
}

