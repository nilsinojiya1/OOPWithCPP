#include<iostream>
using namespace std;

class student{
protected:
    char name[20];
    int enrollNo;
public:
    student(){
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter student enrollment number:";
        cin>>enrollNo;
    }
};
class internal : virtual public student{
    protected:
        int interMarks;
    public:
    internal(){
        cout<<"enter internal marks:";
        cin>>interMarks;
    }
};
class external : virtual public student{
     protected:
        int exterMarks;
    public:
    external(void){
        cout<<"enter internal marks:";
        cin>>exterMarks;
    }
};
class university{
    protected:
        int univMarks;
    public:
        university(void){
            cout<<"Enter university marks:";
            cin>>univMarks;
        }
};
class result : public internal , public external , public university {
        public:
            void printData(){
                cout<<"name:"<<name;
                cout<<"/nenrollment no.:"<<enrollNo;
                cout<<"/ninternal marks:"<<interMarks;
                cout<<"/nexternal marks:"<<exterMarks;
                cout<<"/nuniversity marks:"<<univMarks;
            }
};
int main()
{
        result r;
        r.printData();
    return 0;
}





