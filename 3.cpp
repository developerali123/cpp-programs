#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter first number=";
	cin>>a;
	cout<<"enter second number=";
	cin>>b;
	for(int i=1;i<=a;i++)
	{
	c=a*i;
}
	cout<<"square of first number="<<c<<endl;
	for(int i=1;i<=b;i++)
	{
	d=b*i;
}
cout<<"square of second number="<<d<<endl;
int sum=c+d;
cout<<"sum of squares of both numbers="<<sum;
	return 0;
}
