// Write a cpp program for implement pointer to derived class.
#include<iostream>
using namespace std;

class base
{
public:
int b;
void show()
{
  cout<<"\nb="<<b;
}
};
class derived : public base
{
public:
int d;
void show()
{
  cout<<"\n b="<<b<<"\n d="<<d;
}
};

int main(){
base B1;
derived D1;
base *bptr;
bptr=&B1;
cout<<"\nBase class pointer assign address of base class object";
bptr->b=100;
bptr->show();
bptr=&D1;
bptr->b=200;
cout<<"\nBase class pointer assign address of derived class object";
bptr->show();
derived *dptr;
dptr=&D1;
cout<<"\nDerived class pointer assign address of derived class object";
dptr->d=300;
dptr->show();
}
