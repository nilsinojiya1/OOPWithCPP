//Write a program that opens two text files for reading data. It creates a third file that contains the text of first file and then that of second file (text of second file to be appended after text of the first file, to produce the third file).
#include<iostream>
#include<fstream>
using namespace std;
int main() {
fstream file1,file2,file3;
file1.open("one.txt",ios::in);
file2.open("two.txt",ios::in);
file3.open("three.txt",ios::app);
char ch1,ch2;
while(!file1.eof())
{
file1.get(ch1); cout<<ch2<<endl;
file3.put(ch1);
}
file1.close();
while(!file2.eof())
{
file2.get(ch2); cout<<ch1<<endl;
file3.put(ch2);
}
file2.close(); file3.close();
}
