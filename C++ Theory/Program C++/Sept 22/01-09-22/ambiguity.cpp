#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"hello everyone"<<endl;
    }
};

class B
{
    public:
    void display()
    {
        cout<<"how are you"<<endl;
    }
};

class C : public A,public B
{
    public:
    void display()
    {
      A::display();
      B::display();
    }
};
int main()
{
    C c;
    c.display();
    return 0;
}