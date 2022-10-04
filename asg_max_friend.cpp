#include<iostream>
#include<string>
using namespace std;
class stu
{
	int id,sub[6];
	char name[20];
	public:
		void setstu();
		void result();
};
void stu::setstu()
{
	cout<<"enter id,name:\n";
	cin>>id>>name;
	cout<<"enter 6 sub marks:\n";
	for(int i=0;i<6;i++)
	{
		cin>>sub[i];
	}
}
void stu::result()
{
	int tot=0;
	float avg;
	for(int i=0;i<6;i++)
	{
		tot=tot+sub[i];
	}
	avg=tot/6.0;

	cout<<"total = "<<tot<<endl;
	cout<<"avg = "<<avg<<endl;
	string res;
	for(int i=0;i<6;i++)
	{
		if(sub[i]<35)
		{
			res="fail";
			break;
		}
		else res="pass";
	}
	cout<<"result = "<<res<<endl;
}
int main()
{
	stu s[5];
	for(int i=0;i<5;i++)
	{
		s[i].setstu();
		s[i].result();
	}
	return 0;
}