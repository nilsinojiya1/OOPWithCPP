//Write a cpp program to use default constructor.
#include<iostream>
using namespace std;

class integer
{
    int m,n;
public:
    integer()
    {
        m=n=10;
        cout<<"default constructor is called";
    }
};
int main()
{
    integer i1;
}
