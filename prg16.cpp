//Write a cpp program for friend functions.
#include<iostream>
using namespace std;

class number{
    int num1,num2;
public:

    void setdata(int a,int b);
    friend int add(number N);
};

void number::setdata(int a,int b)
{
    num1=a;
    num2=b;
}
int add(number N)
{
    return (N.num1+N.num2);
}
int main()
{
    number N1;
    N1.setdata(10,20);
    cout<<"Sum="<<add(N1);
    return 0;
}
