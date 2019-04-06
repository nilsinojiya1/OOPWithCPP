//Write a cpp program for exception handling.
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter two values=";
cin>>a>>b;
try
{
if(b!=0){
	c=a/b;
	cout<<"answer="<<c;
}
else
	throw(b);
}
catch(int x)
{
	cout<<"Exception caught: Divide by zero\n";
}
}
