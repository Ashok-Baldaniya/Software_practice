#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    A()
    {
        cout << "default creat successfully" << endl;
    }
    A(int a)
    {
        this->a = a;
        cout << "the value of a is " << a << endl;
    }
    A(int b, int c)
    {
        this->b = b;
        this->c = c;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{
    A a1, a2(2), a3(3, 4);
    return 0;
}