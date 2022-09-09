#include "myvector.hpp"
#include "payload.hpp"

//CONSTRUCTORS

    //size not defined
Vector::Vector() : size(0),capacity(1), array(new Payload[capacity]) {}

    //size is defined
Vector::Vector(int setSize) : size(setSize),capacity(setSize), array(new Payload[capacity])
{}

    //Copy constructor
Vector::Vector(const Vector& copyVector) : size(copyVector.size),capacity(copyVector.capacity), array(new Payload[capacity])
{
    for(int i = 0; i < copyVector.Size(); ++i)
    {
        array[i] = copyVector.array[i];
    }

}

    //Move constructor
Vector::Vector(Vector&& movedVector) : size(movedVector.size), capacity(movedVector.capacity)
{
    array = movedVector.array;
    movedVector.array = nullptr;
    
}


//DESTRUCTOR
Vector::~Vector()
{
    //delete the array of this vector
    delete[] array;
}

//Copy Assignment Operator
Vector& Vector:: operator = (const Vector& copyVector)
{
    //assign values
    size = copyVector.size;
    capacity = copyVector.capacity;
    
    //create new array
    array = new Payload[capacity];
    //fill out the array
    for(int i = 0; i< copyVector.size; i++)
    {
        array[i] = copyVector.array[i];
    }
    return *this;
}

//Move Assignment Operator
Vector& Vector:: operator = (Vector&& moveVector)
{
    //free containers is array
    delete[] array;
    
    //set the pointer of array to null
    moveVector.array = nullptr;
    
    return *this;
}

//QUESTION: What happens if we don't have enough memory for the array to increase and still be continuous?

//adds a new element to the array
void Vector::push_back(Payload element)
{
    if(size < capacity)
    {
        //add the element to the arra
        array[size] = element;
        
        //increase the size of the array
        ++size;
    }
    else
    {
        //increase the capacity
        capacity *=2;
        //create temporary array that has new capacity
        Payload* tempArray = new Payload[capacity];
        
        //copy the array into temporary array with new capacity
        for(int i = 0; i < size; i++)
        {
            tempArray[i] = array[i];
        }
        
        //add new element to array
        tempArray[size] = element;
        //increase the size
        size++;
        //delete elements of the array
        delete[] array;
        
        //assign tempArray with new capacity to array
        array = tempArray;
    }
    
    
}

void Vector::pop_back()
{
    //I tried to print something if you can't continue to pop, but it says that there is no std namespace
//    if(size ==0)
//    {
//        std::cout << "vector is empty\n";
//
//    }
    
    //reduce the size
    --size;
    
}

//return size
int Vector::Size() const
{
    return size;

}
//return capacity
int Vector::Capacity() const
{
    return capacity;
}

//use the payload print
void Vector::print() const
{
    //access each Payload in the vector
    for(int i=0; i < size; i++)
    {
        //print
        array[i].Payload::print(); 
    }
}
