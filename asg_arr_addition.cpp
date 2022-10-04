#include<iostream>
using namespace std;

class array{
	
	int arr[10];
	
	public :
		
		void putarr()
		{
			int i = 0;
			
			for (i = 0; i <10; i++)
			
				cin>> arr[i];
		
		}
	
		array operator +(array x)
		{
			array b;
			for(int i = 0 ;i<10 ;i++ )
			
			b.arr[i]=arr[i]+x.arr[i]	;	
			
			return b;	
		}
	
	
		void getarr()	
		{
			for(int i = 0 ; i<10 ;i++)
			
			cout << arr[i]<<endl;
			
		}
	
};

int main()
{
	array a ,b,c;
	cout << "Enter first array Elements :\n";
	a.putarr();
	
	cout << "\n\nEnter second array Elements: \n";
	b.putarr();
	c = a + b;
	
	cout <<"\n\nAdditon of the both array elements :\n\n";
	c.getarr();
	
	return 0;
	
}



