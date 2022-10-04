#include<iostream>
using namespace std;
template <class t>
class test
{
	int size;
	t arr[];
	public:
		void getsize()
		{
			 cout<<"Enter the size :\n";
			 cin>>size;
		}
		void getarr()
		{
			cout<<"Enter the elements of the array:\n";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void sort()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					if(arr[i]>arr[j])
					{
						int temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			cout<<"After sorting array elements are :\n";
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	test <int>obj;
	obj.getsize();
	obj.getarr();
	obj.sort();
	return 0;
}