#include<iostream>
using namespace std;

class course
{
    public:
    string name;
    string duration;
    int fees;
};
int main()
{
    course ob1,ob2;
    ob1.name="full stack developer";
    ob1.duration ="9 month";
    ob1.fees=95000;

    ob2.name="c++";
    ob2.duration ="3 month";
    ob2.fees=30000;

    cout<<ob1.name<<" "<<ob1.duration<<" "<<ob1.fees<<endl;
    cout<<ob2.name<<" "<<ob2.duration<<" "<<ob2.fees<<endl;
    return 0;
}