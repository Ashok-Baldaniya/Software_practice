#include<iostream>
using namespace std;

class A
{
    int r;
    float R;
    public:
    A(int r)
    {
        this-> r=r;
        cout<<"the area of square is "<<r*r<<endl;
    }
    A(float R)
    {
        this ->R=R;
        cout<<"the area of square is "<<R*R<<endl;
    }
    
};
int main()
{
    A a1((float)3.5),a2(5);
    return 0;
}