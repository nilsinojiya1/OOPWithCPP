//Write a cpp program for passing object and returning object.
#include<iostream>
using namespace std;
class time{
	private:
	int hour,minute,second;
	public:
	void getTime()
	{
		cout<<"\nenter hour:";cin>>hour;
		cout<<"\nenter minute:";cin>>minute;
		cout<<"\nenter second:";cin>>second;
	}
	void printTime()
	{
		cout<<"\n"<<hour<<":"<<minute<<":"<<second;
	}
	time addTime(time t1,time t2)
	{
		time add;
		add.hour=t1.hour+t2.hour;
		add.minute=t1.minute+t2.minute;
		add.second=t1.second+t2.second;
		return add;
	}

};
int main()
{
	time t1,t2,ans,add;
	t1.getTime();
       //t1.printTime();             for print time t1
	t2.getTime();
	//t2.printTime();            for print time t2
	ans=add.addTime(t1,t2);
	ans.printTime();

	return 0;
}
