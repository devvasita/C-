#include<iostream>
using namespace std;

class dev{
	
	private :
		int num;
		
		void no()
		{
			cout << "number = "<<num;
		}
		
	public :
	
		void test()
		{
			
			cout <<"Fun 123"<<endl;
			
		}
		
		
		void test1()
		{
			
			cout <<"hello..."<<endl;
		 } 
		 
		 int a;
		 
		void value(int x)
		{
			a = x;
			
			cout <<"value =  "<<a<<endl; 
			
			
		} 
		 int b;
		void value1(int y) 
		{
			b = y;
			
			cout <<"num = "<<y<<endl;
			
		}
		 
		 
	
};



int main(){
	
	dev v;
	
	v.test();
	v.value(50);
	v.dev::value1(55);
	
}