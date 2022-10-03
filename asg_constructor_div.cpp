#include<iostream>
using namespace std;

class add{


	float c ;
	
	public :
		
	add(float a, float b)	
	{
		
		c = a / b;
	}

	void display ()
	{
		cout << "div  = "<< c ;
		
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