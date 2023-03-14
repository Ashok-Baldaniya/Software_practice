#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;
    // float c=a/b;   // this give int result so result always 0.
    float c=(float)a/b;  // this gives float result
    cout<<c;
    return 0;
}