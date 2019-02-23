//Write a cpp program to convert basic type to class type.
#include<iostream>
using namespace std;
class sample{
private:
    int a;
public:
    sample(){}
    sample(int x){
        a=x;
    }
void display(){
    cout<<"the value of 'a':"<<a;
    }
};
int main(){
int m;
cout<<"\nenter a value of 'a':";
cin>>m;
sample s;
s=m;
s.display();
return 0;
}
