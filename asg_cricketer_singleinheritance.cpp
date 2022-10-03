#include<iostream>
#include<string>
using namespace std;

class circketer{
	
	protected:
		char name[20];
		int total_runs;
		int best_performance;
		
	public :
		void input()
		{
		
		cout << "Enter the name of the player :\n";
		
		cin >> name ;
		
		cout << "Enter the total runs :\n";
		
		cin >> total_runs;
		
		cout << "Enter the best score of the player :\n";
		
		cin >> best_performance;
			
		}	
		
		void output()
		{
		
		cout << "Name of the player :\t "<<name <<endl;
		
		cout << "Total runs =\t\t "<<total_runs<<endl;
		
		cout << "Best score =\t\t "<<best_performance<<endl;
		}
	
	
};

class batsman:public circketer
{	
	float avg;
	int nout;
	
	public :
		void setavg()
		{
			cout << "\n\nEnter number of out of the player:"<<endl;
			
			cin >>nout;
			
			avg = total_runs/nout;		
		}
		
		
		float getavg()
		{
			return avg;
		}

};





int main ()
{
		batsman obj;
		
		obj.input();
		obj.output();
		obj.setavg();
		
		cout << "Avereage of the batsman =\t"<<obj.getavg()<<endl;
		
	
		return 0;
	
	
	
	
	
	
	
}