//Write a cpp program to implement copy constructor.
#include<iostream>
using namespace std;
class example
{
    private:
 	   int x;
    public:
 	example (int a) //parameterized constructor to initialize l and b
 	{
 	     x = a;
 	}
 	example( example &b) //copy constructor with reference object argument
 	{
 	    x = b.x;
        }
 	int display( ) //function to display
 	{
 	     return x;
 	}
};

int main()
{   int n;
    cout<<"enter a any number:";
    cin>>n;
    example c1(n);    //initializing the data members of object 'c' implicitly
 	example c2(c1);   //copy constructor called
 	example c3 = c1;
 	example c4 = c2;
 	cout << "example c1 = " << c1.display() << endl;
 	cout << "example c2 = " << c2.display() << endl;
 	cout << "example c3 = " << c3.display() << endl;
 	cout << "example c4 = " << c4.display() << endl;
 	return 0;
}

