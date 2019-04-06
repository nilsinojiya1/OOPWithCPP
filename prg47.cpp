//Write a cpp program for Re-throwing exception.
#include<iostream>
using namespace std;
void divide(double x, double y){
  try
  {
   if(y==0) throw y;
   else cout<<"Division="<<x/y<<endl;
  }
  catch(double)
  {
   cout<<"Exception inside function\n";
   throw;
  }
}
int main()
{
  try
  {
   divide(10.5,2.0);
   divide(20.0,0.0);
  }
  catch(double)
  {
   cout<<"Exception inside main function";
  }
}
