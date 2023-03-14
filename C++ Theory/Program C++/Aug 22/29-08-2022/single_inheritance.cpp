#include<iostream>
using namespace std;

class base
{
    protected:
    int a,b;
    public:
    void set(int a,int b)
    {
        this->a=a;
        this ->b=b;
    }
};
class derive : public base
{
    public:
    void add()
    {
        cout<<"the addition of "<<a<< " and "<<b<< " is "<<a+b<<endl;
    }
};

int main()
{
    derive o1;
    o1.set(5,6);
    o1.add();
    return 0;
}