#include <iostream>
using namespace std;

template <class t1, class t2>
class A
{
    t1 a;
    t2 b;

public:
    A(t1 a, t2 b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a + b << endl;
    }
};

int main()
{

    A<int, float> a1(4, 5.8);
    a1.display();
    return 0;
}