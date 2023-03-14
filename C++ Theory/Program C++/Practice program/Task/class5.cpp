#include <iostream>
using namespace std;

class fan
{
public:
    string brand;
    string speed;
    string warrenty;
};
int main()
{
    fan ob1, ob2;
    ob1.brand = "usha";
    ob1.speed = "2650 rpm";
    ob1.warrenty = "2 year";

    ob2.brand = "crompton";
    ob2.speed = "2500 rpm";
    ob2.warrenty = "1 year";

    cout << ob1.brand << " fan with " << ob1.speed << " and " << ob1.warrenty << " warrenty " << endl;
    cout << ob2.brand << " fan with " << ob2.speed << " and " << ob2.warrenty << " warrenty " << endl;
    return 0;
}