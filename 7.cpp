#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"enter number=";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<setw(5)<<n*i<<" ";
	}
	cout<<endl;
	for(int i=11;i<=20;i++)
	{
		cout<<setw(5)<<n*i<<" ";
	}
	return 0;
}
