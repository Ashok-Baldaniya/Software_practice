#include <iostream>
using namespace std;

class pencil
{
public:
    string brand;
    string material;
    int price;
};
int main()
{
    pencil ob1, ob2;
    ob1.brand = "doms";
    ob1.material = "a grade wood";
    ob1.price = 20;

    ob2.brand = "nataraj";
    ob2.material = "b grade wood";
    ob2.price = 15;

    cout << ob1.brand << " " << ob1.material << " " << ob1.price << endl;
    cout << ob2.brand << " " << ob2.material << " " << ob2.price << endl;
    return 0;
}