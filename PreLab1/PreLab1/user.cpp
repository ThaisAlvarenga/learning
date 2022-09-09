
#include <iostream>
#include "payload.hpp"
#include "myvector.hpp"
#include "mylist.hpp"

using std::cout;

int main()
{
//    Payload a, b;
//    Payload c("c");
    
    //TASK 1
//    Vector v(4);
//    List s;
    
    //TASK 2
    
//    auto showVector = [](const Vector & v)
//     {
//     cout << "Vector size: " << v.Size() << '\n';
//     };
//
//     {
//     Vector v;
//     v.push_back("apple");
//     v.push_back("pear");
//     showVector(v);
//     v.pop_back();
//
//     showVector(v);
//     }
//     cout << '\n';
    
//     {
//     List s;
//     s.push_front("apple");
//     s.push_front("pear");
//     s.pop_front();
//     }
    
    
    
    //TASK 3
    
    auto showVector = [](const Vector & v)
     {
         cout << "Vector size/capacity: " << v.Size() << '/' <<
         v.Capacity() << '\n';
         v.print(); cout << '\n';
     };
    auto showList = [](const List & s)
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
     showList(s);
     }
    
}
