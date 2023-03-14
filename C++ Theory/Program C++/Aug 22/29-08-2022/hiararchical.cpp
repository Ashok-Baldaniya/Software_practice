#include <iostream>
using namespace std;

class area
{
protected:
    int r, l, w;

public:
    void setr(int r)
    {
        this->r = r;
    }
    void setlw(int l, int w)
    {
        this->l = l;
        this->w = w;
    }
};

class areac : public area
{
public:
    void ac()
    {
        cout << "the area of circle is " << 3.14 * r * r << endl;
    }
};

class arear : public area
{
public:
    void ar()
    {
        cout << "the area of rectangle is " << l * w << endl;
    }
};

int main()
{
    areac o1;
    o1.setr(4);
    o1.ac();
    arear o2;
    o2.setlw(3,2);
    o2.ar();
    return 0;
}