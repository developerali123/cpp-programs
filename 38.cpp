#include<iostream>
using namespace std;
void table()//return_type function_name (input parameters)
{ //body of the function //function definition
	int n;
	cout<<"Enter a number ";
	cin>>n;
	for(int i=1; i<=10; i++)
		cout<<n<<" X "<<i<< " = "<<n*i<<endl;
}
void table1(); //function declaration

void show()
{
	cout<<"\nHello, i ammuhammad ali mirza\n";
}

void factorial()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	for(int i=n-1; i>0; i--)
	{
		n=n*i;
	}
	cout<<"factorial = "<<n<<endl;
}

int main()
{
	table(); //function call
	cout<<"Another Table\n";
	table();
	for(int i=0; i<4; i++)
	table(); 
	cout<<"hello";
	cout<<"\nhru\n";
	table1();
	show();
	factorial();
	return 0;
}
void table1()//return_type function_name (input parameters)
{ //body of the function //function definition
	int n;
	cout<<"Enter a number ";
	cin>>n;
	for(int i=0; i<=10; i++)
		cout<<n<<" X "<<i<< " = "<<n*i<<endl;
}
