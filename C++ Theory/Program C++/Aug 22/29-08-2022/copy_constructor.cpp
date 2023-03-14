#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int a)
    {
        this->a=a;
        
    }
    A(const A &ok)  // this is not mandatory part
    {
        a=ok.a;
    }
    void print()
    {
        cout<<"the value of A is "<<a<<endl;
    }
};

int main()
{
    A o1(5);
    A o2(o1);
    o2.print();
    return 0;
}