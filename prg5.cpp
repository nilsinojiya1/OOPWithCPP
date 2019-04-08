//Write a cpp program to calculate simple interest taking principale and rate of interest and no of uses.
#include<iostream>

using namespace std;

int main()
{
    float rate,amount,time;

    cout<<"enter total amount:";
    cin>>amount;
    cout<<"\nenter rate of interest:";
    cin>>rate;
    cout<<"enter time:";
    cin>>time;

    cout<<"interest="<<(1+(rate*time/100))*(amount);
}
