#include <iostream>
using namespace std;

class A
{
    float r;

public:
    A(float r)
    {
        this->r = r;
    }
    void area()
    {
        cout << "the area of circle is "<< 3.14 * r * r << endl;
    }
};
int main()
{
    A a1(3.5);      // implicit call
    // A a1= A(3);   // explicit call
    a1.area();
    return 0;
}