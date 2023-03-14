#include<iostream>
using namespace std;

void area(int r)
{
    cout<<"the area of circle is "<<3.14*r*r<<endl;
}

void area(int l,int w)
{
    cout<<"the area of rectangle is "<<l*w<<endl;
}

int main()
{
    area(5);
    area(5,6);

    return 0;
}