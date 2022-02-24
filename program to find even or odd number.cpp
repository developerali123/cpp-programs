#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number=";
	cin>>n;
	int reminder=n%2;
	if(reminder==0)
	{
		cout<<"even number";
	}
	else 
	cout<<"odd number";
	return 0;
}
