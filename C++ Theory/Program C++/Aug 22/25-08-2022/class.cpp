#include<iostream>
using namespace std;

class base
{
  public:
  void display()
  {
     cout<<"this is display function of base class"<<endl;
  }
  
};

int main()
{
    base b1;
    b1.display();
    return 0;
}