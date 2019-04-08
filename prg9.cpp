//Write a cpp program for scope resolution operator.
#include<iostream>

using namespace std;

int a=10;

int main()
{
    int a=5;
    cout<<"a="<<a;
    cout<<"\n::a"<<::a;
    return 0;
}
