//Write a cpp program for open a file and perform read operation.
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
char line[50];
ifstream rfile;
rfile.open("example.txt",ios::in);
rfile.getline(line,50);

cout<<line;
rfile.close();
}
