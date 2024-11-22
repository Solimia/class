#include <iostream>
using namespace std;



    class MyException

    {
        string message;
        double value;
    public:
        MyException(const string& message = "None", double value = 0)
            :message(message), value(value)
        {
        }
        const string& what() const
        {
            return message;
        }
        const double& getValue() const
        {
            return value;
        }
    };

    claas DivisionByZeroException : public MyException
    {
    public:
        DivisionByZeroException(const string& message = "None")
            :MyException(message)
        {}
    }

        claas TooBigNumberException : public MyException
    {
        satic const int LIMIT_UP = 1'000'000:
    {}
    };
    claas TooBigNumberException : public MyException
    {
        satic const int LIMIT_UP = 1'000'000
    public:
        TooBig 
    claas
        int main()
        {

        }
