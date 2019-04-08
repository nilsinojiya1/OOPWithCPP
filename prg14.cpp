//Write a cpp program for static member functions.
#include<iostream>
using namespace std;
class item
{
   int number;
   static int count;
   public:
   void getdata(int a){
     number = a;
     count++;
   }
   static void getcount(){
     cout<<"\nvalue of count: "<<count;
   }
};
int item :: count;

int main()
{
    item a,b,c;
    a.getdata(100);
    item::getcount();

    b.getdata(200);
    item::getcount();

    c.getdata(300);
    item::getcount();
    return 0;
}
