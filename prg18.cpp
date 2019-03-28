//Write a cpp program to use default constructor.
#include<iostream>
using namespace std;
class A{
public:
    A()
    {
        cout<<"default constructor called.";
    }
};
int main()
{
    A x;
    return 0;
}
