#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A(){}
    A (int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    A operator+(A obj) //કૉન્સટરુકટર a માં ક્લાસ a ના ઓબ્જેક્ટ પ્લસ કરવા
    {
        A temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }

    void display()
    {
        cout<<a<<" "<<b<<endl;
    } 
};

int main()
{
    A a1(3,2),a2(5,3),a3(7,4),a4;
    a4=a1+a3;
    a4.display();
    return 0;
}