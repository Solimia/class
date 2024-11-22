// 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cat {
	char* name = nullptr;
	size_t age = 0;

public:
	Cat(const char* name, int age)
	{
		setName(name);
		try 
		{
			setName(name);
		}
		catch (const std::exception&)
		{
			this->~Cat();
			throw;
		}
	}
	void setAge(const size_t& age)
	{
		if (age < 0)
			throw invalid_argument("Error");
		this->age = age;
	}
	void setName(const char* name)
	{
		if (this->name != nullptr)
			delete[] this->name;
		int size = strlen(name) + 1;
		this->name = new char[size];
		strcpy_s(this->name, size, name);

	}
	~Cat()
	{
		cout << "___________________________________________ " << endl;
		delete[] name;
	}
};

int main()
{
	try
	{
		Cat cat("Bar", -2);
		cout << " ok", << endl;
	}
	catch ( const std::exception& ex)
	{ }
}