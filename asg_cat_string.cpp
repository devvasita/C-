#include<iostream>
#include<string>
using namespace std;
class String
{
	char str[50];
	public:
		void getstring()
		{
			cout<<"Enter string:"<<endl<<endl;
			cin>>str;
		}
		void putstring()
		{
			cout<<endl<<endl<<"String :\n"<<str;
		}
		String operator +(String obj)
		{
			String obj3;
			strcpy(obj3.str,str);
			strcat(obj3.str," ");
			strcat(obj3.str,obj.str);
			return obj3;
		}
};
int main()
{
	String obj,obj2,obj3;
	obj.getstring();
	obj2.getstring();
	obj3=obj+obj2;
	obj3.putstring();
	return 0;
}