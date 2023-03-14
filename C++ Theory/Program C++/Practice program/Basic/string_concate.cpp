#include<iostream>
using namespace std;

int main()
{
    string a="hello ";
    string b="world";
    // string c=a+b;
    string c=a.append(b);      // second mathod of concate by append operator
    cout<<c;
    return 0;
}