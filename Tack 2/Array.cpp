#include "Array.h"
#include "vector"

using namespace std;

Array::Array(size_t size) : size(size) 
{
    if (size <= 0) 
    {
        throw InvalidArgumentException();
    }
    data = new int[size];
}

Array::~Array()
{
    delete[] data;
}

int& Array::operator[](int index) 
{
    if (index < 0 || index >= size) 
    {
        throw IndexOutOfRangeException();
    }
    return data[index];
}

Array Array::operator+(const Array& other) 
{
    if (this->size != other.size) 
    {
        throw InvalidArgumentException();
    }
    Array result(size);
    for (size_t i = 0; i < size; i++) 
    {
        result[i] = this->data[i] + other.data[i];
    }
    return result;
}

void Array::display() const 
{
    for (size_t i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

size_t Array::getSize() const {
    return size;
}