#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two numbers=";
	cin>>a>>b;
	if(a<b)
	{
	cout<<"the integers between"<<" "<<a<<" and"<<" "<<b<<" are ";
	for(int i=a+1;i<b;i++)
	{
		cout<<i<<", ";
	}
}
	if(a==b)
	{
		cout<<"there is no integer between"<<" "<<a<<" and"<<" "<<b;
	}
	return 0;
}
