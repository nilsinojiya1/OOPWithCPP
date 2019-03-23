//Write a cpp program for static data member
#include<iostream>
#include<stdlib.h>
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
   void printdata()
   {
       cout<<"\ndata="<<number;
   }
   void getcount(){
     cout<<"\nvalue of count: "<<count;
   }
};

int item :: count;

int main()
{
    item arry[10];
    int i;
        for(i=0;i<10;i++)
        {
            arry[i].getdata(rand());
            arry[i].printdata();
            arry[i].getcount();
        }
}
