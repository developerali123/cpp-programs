#include<iostream>
using namespace std;
int main()
{
	int balance=0,car=0,bike=0,truck=0;
	char a;
	do{
		cout<<"E for entering\n X for exiting\n";
		cin>>a;
		if(a=='E')
		{
			cout<<"B for bike\n C for car\n T for truck\n";
			cin>>a;
			switch(a)
			{
				case 'B':balance=balance+5;
				bike++;
				break;
				case 'C':balance=balance+10;
				car++;
				break;
				case 'T':balance=balance+20;
				truck--;
				break;
			}
		}
			else if(a=='X')
			{
				cout<<"B for bike\n C for car\n T for truck\n";
			cin>>a;
			switch(a)
			{
				case 'B':bike--;
				break;
				case 'C':car--;
				break;
				case 'T':truck--;
				break;
			}
			}
			else
			cout<<"invalid choice";
			cout<<"enter Y to repeat\n";
			cin>>a;
		}while(a=='Y');
		cout<<"total balance in a day="<<balance;
		return 0;
}
