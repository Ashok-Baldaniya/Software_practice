#include <iostream>
using namespace std;
class area
{
    int r, l, b;

public:
    void setcircle(int R)
    {
        r = R;
    }
    void setrect(int L, int B)
    {
        l = L;
        b = B;
    }
    void getcircle()
    {
        cout << "the area of circle is " << 3.14 * r * r << endl;
    }
    void getrect()
    {
        cout << "the area of rectangle is " << l * b << endl;
    }
};
int main()
{
    area c, r;
    c.setcircle(3);
    c.getcircle();
    r.setrect(5, 6);
    r.getrect();
    return 0;
}