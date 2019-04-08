//Write a cpp program for find area of rectangle using inline function.
#include<iostream>
using namespace std;

inline float area(float x,float y)
{
    cout<<"area="<<x*y;
}
int main()
{
    float x,y;
    cout<<"enter length:"; cin>>x;
    cout<<"\nenter breadth:"; cin>>y;
    area(x,y);
    return 0;
}
