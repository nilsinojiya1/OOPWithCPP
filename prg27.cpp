//Write a cpp program to convert class type to class type.
#include<iostream>
using namespace std;
class stock2;
class stock1{
private:
    int code,item;
    float price;
public:
    stock1(int a,int b,float c){
    code=a;
    item=b;
    price=c;
    }
    void display(){
        cout<<"\ncode:"<<code;
        cout<<"\nitem"<<item;
        cout<<"\nprince per items:"<<price;
        }
    int getcode(){
        return code;
        }
    int getitem(){
        return item;
        }
    int getprice(){
        return price;
        }
    operator float(){
        return (item * price);
        }
    };
class stock2{
private:
    int code;
    float val;
public:
    stock2(){
    code=0;
    val=0;
    }
    stock2(int x, int y){
    code=x;
    val=y;
    }
    void display(){
    cout<<"\ncode:"<<code;
    cout<<"\ntotal value RS."<<val;
    }
    stock2(stock1 p){
    code=p.getcode();
    val=p.getitem() * p.getprice();
    }
};
int main(){
    stock1 i1(101,10,125.0);
    stock2 i2;
    float totVal=i1;
    i2=i1;
    cout<<"stock detail: stock1 type";
    i1.display();
    cout<<"stock detail: stock type";
    i2.display();
    return 0;
}
