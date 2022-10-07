#include<iostream>
#include<string> 
#include<time.h>
using namespace std;
 class bank{
 	
 	string name ;
 	string sname;
 	string bname ;
 
 
 	double balance = 20000;
 	double amount;
 	long long actnumber;
 	
 	
 	public :
 		
 
 	void extra()
 	{
 		 
 		
 		cout <<"Press 1 and enter to Acces your account via pin number\n"
 				
			<<"\t\t\t\tor"<<endl<<endl
			
			<<"Press 0 and press enter to get help"<<endl;		 		
 		
	 }
	 
	 


 	
 
 
	 
	 
	 void deposit()
{
	int amount ;
	
	cout << "Present available balance =  "<<balance<<endl;
	
	cout << "\n\nEnter the amount to be deposited rs :"<<endl;
	
	cin >> amount ;
	
	balance = amount +balance;
	
	cout << "\n\nYour new available balance amount is rs :"<<balance<<endl;
	
	cout << "\n\t\t\tThank you\n\n";
	
	
 } 
 
 	void withdraw()
{
	int withdraw ;
	
	cout << "Enter amout to withdraw :"<<endl;
	
	cin >> withdraw;
	
	balance = balance - withdraw ;
	
	if (withdraw<balance)
	{
		cout << "After withdrawl balance = "<<balance <<endl;
	}
	else
	{
		cout << "Insufficient balance in your account..."<<endl
		
			<<"\t\t\tsorry !"<<endl<<endl;
			
			
				
	}
}
	
	void putdata();
	void bal ()
{
	cout << "Total balance = "<<balance<<endl;

}
	
	void getdata()
 {
		cout << "\n\nThe name of the account holder : "<<name<<endl<<endl;
		
		cout <<"The account holder address : "<<sname<<endl<<endl;
		
		cout << "The branch location is : "<<bname<<endl<<endl;
		
		cout << "Account number: "<<actnumber<<endl<<endl;
		
		
		
	
 }
 	
	
	
	 
	};
 	
 
 void bank ::putdata()	
 {
 

	cout<<"Enter your name\n";
	
	cin.ignore();
	
	getline(cin,name);
	

	
	
	cout << "\nEnter Name of your state "<<endl;
	
	cin >> sname ;
	
	cout << "\n\nEnter branch location"<<endl;
	
	cin >> bname;
	
	cout << "\n\nEnter your account number :"<<endl;
	
	cin >> actnumber;
	
	
	

 }
 	
 	
 
 
 

	
	
	
	

	
	


int main()
{
	time_t t;
	time(&t);
	int choice ;
	string pin;
	bank b;
	
	cout << "\t\t\tWELCOME TO ATM"<<endl<<endl;
	
	cout << "\t\t\t---------------------------------"<<endl<<endl;
	cout <<"\t\tCurrent date : "<< ctime(&t)<<endl;
	cout << "\t\t\t---------------------------------"<<endl<<endl;
	
	b.extra();
		int ch;
	 	cin >>ch;
	 	
	 	if(ch==1)
	 	{
	 		cout << "\t\t\t\tATM ACCOUNT ACCESS"<<endl<<endl;
	 		
	 		cout <<"Enter your acc Pin accesss number"
	 		
	 			<<" [Only one attempt is allowed]"<<endl;
	 			
	 			cin >> pin;
	 	if(pin=="12345")
		 {	
		 	cout<<endl;
		 	cout <<"\t\t\tWelcome to your account..."<<endl<<endl;
		 	
		 	b.putdata();
		 	while (1){
		
		cout << "\t\t\tATM main menu screen\n\n\n";
	
	cout <<"Enter [1] To Deposit cash"<<endl
		 <<"Enter [2] To Withdraw cash"<<endl
		 <<"Enter [3] To Balance Inquiry "<<endl
		 <<"Enter [4] To Exit ATM"<<endl;	
		 
	cout<<"\n\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY:";
		
	cin >> choice ;
	
	switch (choice)	
	{
		case 1 :
			b.getdata();
			b.deposit();
			break;
			
		case 2 :
			b.getdata();
			b.withdraw();	
			break;
	
		case 3 :
			b.getdata();
			b.bal();
			break;
		
				
		case 4:
			exit(1);
			break;
		
		
		
		
	}
		
	}
		 	
		 	
		         //menu();
		
		 }	
		 else
		 {
		 	cout << "\n\n\t\t\t\tATM ACCOUNT ACCESS"<<endl<<endl;
		 	
		 	cout <<"\n\nYou had made your attempt which failed !!"
		 			
		 		<<"No more attempts allowed!!" 
				 
				 <<"\n\t\t\tsorry !!"	;
		 		
		 		
			 }	
	 					
		 }
	 	else if(ch==0)
	 	{
	 		cout <<"\n\n\t\tYou must have correct pin to access this account"<<
				 		
	 			". See your\n \t\tbank representative for assistance during bank opening hours"<<endl
	 			
	 			<<"\t\tThanks for , your choice today !!";
	 			
	 			cout << "\n\n\t\t\t\tThank you";	
		 }	
	 }


	

		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
		
	

