//Write a cpp program to implement destructor.
#include <iostream>
using namespace std;
class ABC
{
    public:
        ABC () //constructor defined
       {
 	    cout << "Hey look I am in constructor" << endl;
       }
       ~ABC() //destructor defined
       {
             cout << "Hey look I am in destructor" << endl;
       }
};

int main()
{
     ABC cc1; //constructor is called
     cout << "function main is terminating...." << endl;
     return 0;
}
