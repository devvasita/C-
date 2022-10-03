#include<iostream>
using namespace std;

class calculator{
	
	public:
		
		float a ,b ;
		
	void value()
	{
		cout<<"Enter the first value:\n";
		
		cin>>a;
		
		cout<<"Enter the second value:\n";
		
		cin>>b;
		
	}	
		
	float add()
	{
		return a+b;
		
	}	
		
		
	float sub()	
	{
		
		return a-b;
	}
	
	float mul()
	{
		
		return a*b;
	}
	
	float div()
	{
		
		return a/b;
		
	}
	
	
	
};

int main()
{
	int ch;

    calculator c; 

    cout << "Enter 1 to Add 2 Numbers" << 

            "\nEnter 2 to Subtract 2 Numbers" << 

            "\nEnter 3 to Multiply 2 Numbers" << 

            "\nEnter 4 to Divide 2 Numbers" << 

            "\nEnter 0 To Exit";
            
            
    do{
    	cout<< "\n Enter choice\n";
    	
    	cin>>ch;
    	
    	switch(ch)
    	{
    		case 1 :
    			
    		c.value();
				
    		cout<<"Result : "<<c.add()<<endl;
    		break;
    		
    		case 2 :
    			
    		c.value();	
    			
    		cout<<"Result : "<<c.sub()<<endl;
    		break;	
    		
    		case 3 :
    			
    		c.value();
    		
    		cout<<"Result : "<<c.mul()<<endl;
    		break;
    		
    		case 4 :
    			
    		c.value();	
    			
    		cout<<"Result : "<<c.div()<<endl;
			break;	
    		
    		
    		
		}  	
    	
    	
    	
	}while(ch>=1 && ch<=4);        

	
	return 0;
}



