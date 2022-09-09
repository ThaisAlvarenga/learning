# Vectors and Singly Linked List in C++
## Summary
This lab contains a custom vector class and a custom linked list struct written in C++. 

### Installation
IDE : Xcode Version 10.2.1 (10E1001)
OS: macOS Monterrey version 14.4
### Directory structure
./Selection-sort-psa273/main.cpp has main function of the program and functions used inside main()
./Selection-sort-psa273/lorem.h has the declaration and definition of Lorem class
### Usage 
Automated run in Xcode. The PAYLOAD.cpp file has a flag that can be used to test the code. The user.cpp file has all the versions of the tasks 0-4.
### Description
There are two classes:
- Vector (declared in the myvector.hpp with functions defined in myvector.cpp). The data structure has two int variables called size and capacity to keep track of the current size of the array and the capactity the array can have. It also has a dynamic array of type Payload. It has a methods:
        - push_back() which adds a new element to the array. It also increases the capacity of the vector's array by creating a new array and copying it to the current array.
        - pop_back() which removes an element from the array
        - Size() which returns the current size of the array
        - Capacity() which returns how many elements the array could hold. 
        - print() which prints out each Payload element in the array of the vector
- List (declared in mylist.hpp with functions defined in mylist.hpp), which is a custom data structure of type singly linked lits. It has a Node pointer called head that points to the first node of the list. The struct has functions: 
        - push_front(), which adds a node to the front of the list.
        - pop_front() which removes/deletes the top element of the list.
        - size() which returns the current size (number of nodes) of the list
        - print() which prints the Payload elements of each node in the list
    Inside the mylist.hpp, there is a struct:
        -Node: contains an element of type Payload and a Node pointer to the next node of the linked list. 
