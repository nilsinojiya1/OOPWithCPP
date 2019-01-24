//Write a cpp program to add two class using friend function.
#include<iostream>
using namespace std;

class two;
class one
{
    int x;
public:
    void setdata(int a)
    {
        x=a;
        //cout<<"\n"<<x;
    }
    friend int add(one x,two y);
};

class two
{
    int y;
public:
    void setdata(int b)
    {
        y=b;
        //cout<<"\n"<<y;
    }
    friend int add(one x,two y);
};
int add(one a,two b)
{
    return a.x+b.y;
}
int main()
{
    one x;
    two y;
    int i,j,sum;
    cout<<"enter the value of x&y";
    cin>>i>>j;

    x.setdata(i);
    y.setdata(j);
    cout<<"sum="<<add(x,y);
    return 0;
}
