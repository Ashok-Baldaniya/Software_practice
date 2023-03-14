#include <iostream>
using namespace std;
class cal
{
    int a, b;

public:
    void setadd(int A, int B);
    void getadd();
};

void cal::setadd(int A, int B)
{
    a = A;
    b = B;
}
void cal::getadd()
{
    cout << "the addition of " << a << " and " << b << " is " << a + b << endl;
}
int main()
{
    cal o1;

    o1.setadd(4, 6);
    o1.getadd();
    return 0;
}