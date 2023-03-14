#include<iostream>
using namespace std;

class laptop
{
    public:
    string brand;
    string model;
    int price;
};
int main()
{
    laptop obj1,obj2;
    obj1.brand="sony";
    obj1.model ="vpcsb";
    obj1.price=70000;

    obj2.brand="asus";
    obj2.model ="tx900";
    obj2.price=60000;

    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.price<<endl;
    cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.price<<endl;
    return 0;
}