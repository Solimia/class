#pragma once

#include <exception>

using namespace std;

class IndexOutOfRangeException : public exception 
{
public:
    const char* what() const noexcept override
    {
        return "Індекс виходить за межі масиву.";
    }
};

