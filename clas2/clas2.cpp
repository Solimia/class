// clas2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fnT(int& value)
{
	try
	{
		if (value < 0)
		{
			throw exception("Error !!! ");
		}
	}
	catch (const std::exception& ex)
	{
		cout << "Inter cartch" << endl;
		throw;
	}
	value *= 2;
}

int main()
{
	int number = -10;
	try
	{
		fnT(number);
		cout << "Number ::" << number << endl;
	}
	catch
}

