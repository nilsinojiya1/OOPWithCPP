//Write a cpp program enter the 3 numbers and find largest number
#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter a three number"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nc=";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"c is greater.";
        }
        else
        {
            cout<<"c is greater.";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is greater.";
        }
        else
        {
            cout<<"c is greater.";
        }
    }
}
