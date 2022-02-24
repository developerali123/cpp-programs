#include<iostream>
using namespace std;
class bank
{
	char name[100];
	char address[150];
	char y;
	int balance;
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};
void bank::open_account()
{
	cout<<"enter your full name";
	cin.ignore();
	cin.getline(name,100);
	cout<<"enter your address";
	cin.ignore();
	cin.getline(address,150);
	cout<<"what type of account you want to open\n 1) saving\n 2)current\n";
	cin>>y;
	cout<<"enter amount for deposit";
	cin>>balance;
	cout<<"your account has been created\n";
}
void bank::deposite_money()
{
	int a;
	cout<<"how much you deposit";
	cin>>a;
	balance+=a;
	cout<<"total amount you deposit"<<balance;
	cout<<endl;
}
void bank::display_account()
{
	cout<<"your full name\n"<<name;
	cout<<"your address\n"<<address;
	cout<<"type of account that you open\n"<<y;
	cout<<"amount you deposit\n"<<balance;
}
void bank::withdraw_money()
{
	float amount;
	cout<<"enter a amount to withdraw";
	cin>>amount;
	balance-=amount;
	cout<<"now you total amount left in account is"<<balance;
	cout<<endl;
}
int main()
{
	int ch;
	char al;
	bank obj;
	do{
	cout<<"1) open account\n";
	cout<<"2) deposite money\n";
	cout<<"3) withdraw money\n";
	cout<<"4) Display account\n";
	cout<<"5) Exit\n";
	cout<<"select the option from above";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"1) open account\n";
		obj.open_account();
		break;
		case 2:cout<<"2) deposit money\n";
		obj.deposite_money();
		break;
		case 3:cout<<"3) withdraw money\n";
		obj.withdraw_money();
		break;
		case 4:cout<<"4) display money\n";
		obj.display_account();
		break;
		case 5:
			if(ch==5)
			{
				exit(1);
			}
			default:
				{
				cout<<"please choose correct option from above\n try again\n";
			}
		}
				cout<<"do you want to select next option then press(y/n)";
				cin>>al;
}while(al=='y'||al=='n');
return 0;
}
