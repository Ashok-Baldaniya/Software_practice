#include<iostream>
using namespace std;
    class A
    {
        public:
        virtual void display()
        {
            cout<<"hello"<<endl;
        }
    };

    class B : public A
    {
        public:
        void display() // here function name same as base class
        {
            cout<<"world"<<endl;
        }
    };


int main()
{
    A a1;
    B b1;
    A *p;
    p=&b1;
    p->display();

    return 0;
}