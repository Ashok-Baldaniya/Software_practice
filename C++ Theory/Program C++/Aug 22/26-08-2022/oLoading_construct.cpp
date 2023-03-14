#include <iostream>
using namespace std;

class Area
{
    float a, h, w, l, b, i;

public:
    Area() {}
    Area(float a)
    {
        cout << "the area of square is " << a << endl;
    }
    Area(float h, float w)
    {
        this->h = h;
        this->w = w;
        cout << "the area of rectangle is " << h * w << endl;
    }
    Area(float l, float b, float i)
    {
        this->l = l;
        this->b = b;
        this->i = i;
        cout << "the volume of cube is " << l * b * i << endl;
    }
};

int main()
{
    Area a1,a2(3),a3(2,3),a4(2,3.4,4);
    return 0;
}