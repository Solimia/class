#pragma once
#include "IndexOutOfRangeException.h"
#include "InvalidArgumentException.h"
#include <iostream>  

class Array 
{
private:
    int* data;
    size_t size;

public:
    Array(size_t size);

    ~Array();

    int& operator[](int index);

    Array operator+(const Array& other);

    void display() const;

    size_t getSize() const;
};

