#include <iostream>
using namespace std;

class B;
class C;
class A
{
    friend void add(A a, B b, C c);
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
};

class B
{
    friend void add(A a, B b, C c);
    int b;

public:
    B(int b)
    {
        this->b = b;
    }
};

class C
{
    friend void add(A a, B b, C c);
    int c;

public:
    C(int c)
    {
        this->c = c;
    }
};

void add(A a, B b, C c)
{
    cout << a.a + b.b + c.c << endl;
}

int main()
{
    A a1(49);
    B b1(38);
    C c1(48);
    add(a1, b1, c1);
    return 0;
}