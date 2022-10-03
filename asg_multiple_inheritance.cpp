#include<iostream>
#include<string>
using namespace std;
class person
{
	private:
		int age;
		string name;
	public:
		person()
		{
			cout<<"enter age:\n";
			cin>>age;
			cout<<"enter name:\n";
			cin>>name;
		}
		void showper()
		{
			cout<<"name is "<<name<<endl<<"age is "<<age<<endl;
		}
};
class student:public person
{
	private:
		int percentage;
	public:
		student()
		{
			cout<<"enter percentage:\n";
			cin>>percentage;
		}
		void showstu()
		{
			cout<<"percentage is "<<percentage<<endl;
		}
		
};
class teacher:public person
{
	private:
		int salary;
	public:
		teacher()
		{
			cout<<"enter salary:\n";
			cin>>salary;
		}
		void showtea()
		{
			cout<<"salary is "<<salary<<endl;
		}
};
int main()
{
	student s;
	s.showper();
	s.showstu();
	teacher t;
	t.showper();
	t.showtea();
	return 0;
}