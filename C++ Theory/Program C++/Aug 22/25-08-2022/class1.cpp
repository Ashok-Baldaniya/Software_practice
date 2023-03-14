#include<iostream>
using namespace std;

class ope
{
    int a,b;
    public:
    void setdata(int A,int B)
    {
        a=A;
        b=B;
    }
    void getdata()
    {
        cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }

};
int main()
{
    ope o1;
    o1.setdata(5,5);
    o1.getdata();
    return 0;
}