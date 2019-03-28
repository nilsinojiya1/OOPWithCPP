//Write a cpp program for method overloading.
#include<iostream>
using namespace std;
class A{
public:
    void display()
    {
        cout<<"This is parent class";
    }
};
class B : public A{
public:
    void display()
    {
        cout<<"\nThis is child class";
    }
};
int main()
{
    B x;
    x.display();
    x.A::display();
    return 0;
}
