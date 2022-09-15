#include "myvector.h" 

Vector::Vector() 
{
	payloads = new Payload[CAPACITY];
}


Vector::Vector(int CAP) 
{
	payloads = new Payload[CAP];
}


void Vector::push_back(const Payload& x)
{

	if (v_size < CAPACITY)
		payloads[v_size] = (Payload&&)x;
	else
	{
		reserve(CAPACITY * 2);
		payloads[v_size] = (Payload&&)x;
	}

	++v_size;
}


void Vector::push_back(const Payload&& x)
{
	if (v_size < CAPACITY)
		payloads[v_size] = (Payload&&)x;
	else
	{
		reserve(CAPACITY * 2);
		payloads[v_size] = (Payload&&)x;
	}

	++v_size;
}


void Vector::pop_back() { --v_size;}


void Vector::reserve(int newCapacity)
{
	if (newCapacity < v_size)
		return;

	Payload* temp_vector = new Payload[newCapacity];

	for (int i = 0; i < v_size; i++) 
		temp_vector[i] = (Payload&&)payloads[i];


	CAPACITY = newCapacity;

	//superbasic implementation of std::swap
	Payload* temp2 = payloads;
	payloads = temp_vector;
	temp_vector = temp2;

	delete[] temp_vector;
} 


void Vector::print() const
{
	for (int i = 0; i < v_size; i++)
		printf("(%s)", payloads[i].name.c_str()); 
	printf("\n");
}


void Vector::resize(int newSize)
{
	v_size = newSize;
}


int Vector::capacity() const
{
	return CAPACITY;
}
	

int Vector::size() const 
{
	return v_size;
}


Vector::~Vector() {
	delete[] payloads;
}

void Vector::push_front()
{
    
}

void Vector::pop_front()
{
    
}
