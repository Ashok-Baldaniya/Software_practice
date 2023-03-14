#include <iostream>
using namespace std;
class A
{
    virtual void display(){}    //or
    // virtual void display() = 0;
};

class B : public A
{
public:
    void display()
    {
        cout << "this is class B" << endl;
    }
};

class C : public A
{
public:
    void display()
    {
        cout << "this is class C" << endl;
    }
};
int main()
{
    B b1;
    C c1;
    b1.display();
    c1.display();

    return 0;
}