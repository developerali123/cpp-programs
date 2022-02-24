#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number=";
	cin>>n;
	cout<<"even numbers:";
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		cout<<i<<", ";
	}
	cout<<"\nodd numbers:";
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		cout<<i<<", ";
	}
	return 0;
}
