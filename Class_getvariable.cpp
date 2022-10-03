#include<iostream>
using namespace std;

class person {
	
	public :
	int  salary ;
	
	int age;
};

int main()

{
	person p;
	
	cout << "Enter your salary :"<<endl;
	
	cin >>p.salary;
	
	cout <<"salary = "<<p.salary<<endl;
	
	cout << "Enter your age :"<<endl;
	
	cin >> p.person ::age;
	
	cout <<"age = "<<p.person ::age ;
	return 0;
	
}