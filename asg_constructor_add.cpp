#include<iostream>
using namespace std;

class add{


	int c ;
	
	public :
		
	add(int a , int b)	
	{
		
		c = a + b;
	}

	void display ()
	{
		cout << "sum = "<< c ;
	}
	
	
};


int main ()
{
	int  a , b;
	
	cout << "Enter two numbers :"<<endl;
	
	cin >> a >> b;
	
	add obj(a , b);
	
	obj.display();
	
	
}