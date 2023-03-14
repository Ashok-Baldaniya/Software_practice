#include<iostream>
using namespace std;

class base1
{
    protected:
    int a;
    public:
    void setA(int a)
    {
        this ->a=a;
    }
};

class base2
{
    protected:
    int b;
    public:
    void setB(int b)
    {
        this ->b=b;
    }
};

class derive : public base1,public base2
{
    public:
    void display()
    {
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;

    }
};
int main()
{
    derive o1;
    o1.setA(7);
    o1.setB(5);
    o1.display();
    return 0;
}