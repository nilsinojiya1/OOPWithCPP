//Write a cpp program for create/open a file and perform write operation.
#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
  ofstream myfile;
  myfile.open("example.txt",ios::out);
  myfile << "This is India.\n";
  myfile << "It is a great country.\n";
  myfile.close();
}

