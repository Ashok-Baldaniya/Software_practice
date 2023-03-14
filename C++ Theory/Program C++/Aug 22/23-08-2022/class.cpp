#include <iostream>
using namespace std;
class bag
{
    public:
    void mi()
    {
        cout << "this bag is mi"<<endl;
    }
    // private:
    void oppo()
    {
        cout << "this bag is oppo"<<endl;
    }
};

int main()
{
    bag b1, b2;
    b1.mi();
    b2.mi();
    b2.oppo();
    return 0;
}