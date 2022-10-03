#include<iostream>
using namespace std;

class student{
	
	char name[20];
	int rollno;
	
	public :
		
		void setroll()
		{
			cout << "Enter name of the student:\n";
			cin >> name;
			cout << "Enter roll no :"<<endl;
			cin >> rollno;
		
		}
		
		void getroll()
		{
			
			cout << "name : \t\t"<<name<<endl;
			cout << "Roll no = \t"<<rollno<<endl;
		}
};

class test : public student
{
	protected :
		float marks1,marks2,marks3;
		
		public :
			void setmark()
			{
				cout << "Enter the marks of the three subject :"<<endl;
				cin >> marks1>>marks2>>marks3;
			}
			void getmark()
			{
				cout << "Subject 1 marks = "<<marks1<<endl;
				
				cout << "Subject 2 marks = "<<marks2<<endl;
				
				cout << "Subject 3 marks = "<<marks3<<endl;
			}	
};

class result : public test
{
	private :
		float total;
		float avg;
	
	public :
		void setresult()
		{
			total = marks1 + marks2 + marks3;
			avg = total / 3.0;
				
		}
		void getresult()
		{
				cout <<"Total marks =\t "<<total <<endl;
				
				cout << "Avereage marks\t = "<<avg << endl;
			
		}
		
	
};

int main ()
{
	result r;
	
	r.setroll();
	r.getroll();
	r.setmark();
	r.getmark();
	r.setresult();
	r.getresult();
	
	
	return 0;
	
	
	
	
}
