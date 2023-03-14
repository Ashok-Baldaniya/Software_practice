#include <iostream>
using namespace std;

class shop
{
    static int id;
    string name;
    float price;

    public:
    void setdata(string n, float p)
    {
        name = n;
        price = p;
    }
    void getdata()
    {
        id++;
        cout << id << " " << name << " " << price << endl;
    }
};

int shop::id;
int main()
{
    shop e1, e2, e3;
    e1.setdata("milk", 25);
    e2.setdata("biscuit", 15);
    e3.setdata("lolipop", 5);
    e1.getdata();
    e2.getdata();
    e3.getdata();

    return 0;
}