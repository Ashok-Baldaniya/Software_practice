#include <iostream>
using namespace std;

class A
{
protected:
    int id;

public:
    void setid(int id)
    {
        this->id = id;
    }
};

class B : public A
{
protected:
    string name;

public:
    void setname(string name)
    {
        this->name = name;
    }
};

class C
{
protected:
    int sal;
    string dep;

public:
    void sel(int sal, string dep)
    {
        this->sal = sal;
        this->dep = dep;
    }
};

class D : public B, public C
{
public:
    void getdata()
    {
        cout << id << " " << name << " " << sal << " " << dep << endl;
    }
};

int main()
{
    D d;
    d.setid(101);
    d.setname("ashok");
    d.sel(30000, "IT");
    d.getdata();
    return 0;
}