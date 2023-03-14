#include <iostream>
using namespace std;

class fruit
{
public:
    string name;
    string weight;
    // private:
    int price;
};
int main()
{
    fruit ob1, ob2;
    ob1.name = "apple";
    ob1.weight = "1 kg";
    ob1.price = 250;

    ob2.name = "banana";
    ob2.weight = "12 pcs";
    ob2.price = 60;

    cout << ob1.name << " " << ob1.weight << " " << ob1.price << endl;
    cout << ob2.name << " " << ob2.weight << " " << ob2.price << endl;
    return 0;
}