//Write a cpp program for reading and writing class object.
#include<iostream>
#include<fstream>
using namespace std;
class inventory
{
char name[10];
float cost;
public:
void readdata()
{
cout<<"Enter Name=";
cin>>name;
cout<<"Enter cost=";
cin>>cost;
}
void displaydata()
{
cout<<"Name="<<name<<endl;
cout<<"Cost="<<cost;
}
};
int main()
{
inventory ob1;
cout<<"Enter details of product\n";

fstream file;
file.open("stock.txt",ios::in | ios::app);

ob1.readdata();
file.write((char *)&ob1,sizeof(ob1));

file.seekg(0);

file.read((char *)&ob1,sizeof(ob1));

ob1.displaydata();
file.close();
}

