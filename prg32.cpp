//Write a cpp program to implement hybrid inheritance.
#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B()      //constructor to initialize x in base class A
 	{
 	   cout<<"enter value of x:";
 	   cin>>x;
 	}
};
class C
 {
 	public:
 	int y;
 	C()   //constructor to initialize y
 	{
 	    cout<<"enter value of y:";
 	    cin>>y;
 	}
};
class D : public B, public C   //D is derived from class B and class C
{
 	public:
 	void sum()
 	{
 	    cout << "Sum= " << x + y;
 	}
};

int main()
{
    D obj1;          //object of derived class D
 	obj1.sum();
 	return 0;
}
