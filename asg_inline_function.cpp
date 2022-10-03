#include<iostream>
using namespace std;

class fun {
	
	public :
		
		inline float mul(float x , float y)
		{
			return x*y;
		}
		
		inline float cube(float x)
		{
			return x*x*x;
		}
	
};

int main()
{
	fun obj;
	float x ,  y , z;
	
	cout << "Enter two values for find its multiplication:"<<endl;
	
	cin >> x >> y;
	
	cout << "multipication =  "<<obj.mul(x,y)<<endl;
	
	cout << "Enter value for find its cube: "<<endl;
	
	cin >>z;
	
	cout<< "cube = "<<obj.cube(z);
	
}

