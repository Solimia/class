#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    try 
    {
        Array arr1(5);
        Array arr2(5);

        for (int i = 0; i < 5; ++i)
        {
            arr1[i] = i + 1;
            arr2[i] = (i + 1) * 2;
        }

        cout << "masuv 1: ";
        arr1.display();
        cout << "masuv 2: ";
        arr2.display();

        Array arr3 = arr1 + arr2;
        cout << "result: ";
        arr3.display();

        cout << "Error: " << arr1[10] << endl; 
    }
    catch (const IndexOutOfRangeException& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const InvalidArgumentException& e) 
    {
        cout << "error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "tin error: " << e.what() << endl;
    }

    return 0;
}