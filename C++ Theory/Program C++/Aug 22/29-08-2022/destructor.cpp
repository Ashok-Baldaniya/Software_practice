#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int a)
    {
        this->a=a;
        cout<<"The value of a is "<<a<<endl;
    }
    ~A()
    {
        cout<<"destructor run successfully"<<endl;
    }
};
int main()
{
    A o(5);
    return 0;
}