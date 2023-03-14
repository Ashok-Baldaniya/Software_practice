#include <iostream>
using namespace std;

class cal
{
    int a, b;

public:
    void setadd(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void getadd()
    {
        cout << "the addition of " << a << " and " << b << " is " << a + b << endl;
    }
};
int main()
{
    cal o1;
    o1.setadd(4,4);
    o1.getadd();
    return 0;
}