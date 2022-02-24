#include<iostream>
using namespace std;
int main()
{
	cout<<"even number upto 50\n";
	for(int i=0;i<=50;i=i+2)
	{
	int n=i%2;
	if(n==0)
	{
	
	cout<<i<<endl;
}
}

cout<<"even number upto 50 in reverse order\n";
	for(int i=50;i>=0;i=i-2)
	{
	int n=i%2;
	if(n==0)
	{
	
	cout<<i<<endl;
}
}

cout<<"odd number upto 50\n";
	for(int i=0;i<=50;i++)
	{
	int n=i%2;
	if(n!=0)
	{
	
	cout<<i<<endl;
}
}

cout<<"even number upto 50 in reverse order\n";
	for(int i=50;i>=0;i--)
	{
	int n=i%2;
	if(n!=0)
	{
	
	cout<<i<<endl;
}
}
	return 0;
}
