#include<iostream>
using namespace std;

class A
{
    protected:
    int id;
    public:
    void setid(int id)
    {
        this->id=id;
    }
};

class B : public A
{
    protected:
    string name;
    public:
    void setname(string name)
    {
        this->name=name;
    }
};

class C : public B
{
    float sal;
    public:
    void setsal(float sal)
    {
        this->sal=sal;
    }

    void getdata()
    {
        cout<<id<<" "<<name<<" "<<sal<<endl;
    }
};

int main()
{
    C c1;
    c1.setid(101);
    c1.setname("ashok");
    c1.setsal(30000);
    c1.getdata();
    return 0;
}