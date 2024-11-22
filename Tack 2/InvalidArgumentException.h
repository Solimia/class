#pragma once
#include <exception>

using namespace std;

class InvalidArgumentException : public exception
{
public:
    const char* what() const noexcept override 
    {
        return "Невірний аргумент.";
    }
};