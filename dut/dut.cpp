#include <iostream>

using namespace std;

class MyException
{
protected:
    string message;
public:
    MyException(const string& message = "None") : message(message) {}
    virtual const string& what() const
    {
        return message;
    }
};

class NegativeOrZeroSideException : public MyException
{
public:
    NegativeOrZeroSideException(const string& message = "Side length must be positive and non-zero")
        : MyException(message) {}
};

class InvalidTriangleException : public MyException 
{
public:
    InvalidTriangleException(const string& message = "These sides do not form a valid triangle")
        : MyException(message) {}
};

double calculateArea(double a, double b, double c) 
{

    if (a <= 0 || b <= 0 || c <= 0) {
        throw NegativeOrZeroSideException();
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        throw InvalidTriangleException();
    }


    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() 
{
    double a, b, c;

    cout << "Enter three sides of the triangle: \n";
    while (cin >> a >> b >> c)
    {
        try {
            double area = calculateArea(a, b, c);
            cout << "The area of the triangle is: " << area << endl;
        }
        catch (const NegativeOrZeroSideException& ex) 
        {
            cout << "Exception: " << ex.what() << endl;
        }
        catch (const InvalidTriangleException& ex) 
        {
            cout << "Exception: " << ex.what() << endl;
        }
        catch (const MyException& ex)
        {
            cout << "General exception: " << ex.what() << endl;
        }
        catch (...)
        {
            cout << "An unknown error occurred!" << endl;
        }

        cout << "Enter three sides of the triangle again: \n";
    }
    return 0;
}