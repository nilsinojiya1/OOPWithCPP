// Write a cpp program for implement pointer to objects.
#include<iostream>
using namespace std;

class demo{
int i;
public:
  demo(int x){
    i=x; }
  int getdata(){
    return i;}
};
int main()
{
demo d[3]={55,66,77};
demo *ptr=d; //similar to *ptr=&d[0]
for(int i=0;i<3;i++)
{
cout<<ptr->getdata()<<endl;
ptr++;
   }
}
