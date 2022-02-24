#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number=";
	cin>>n;
	while(n<10)
	{
	for(int i=n-1;i>0;i--)
	n=n*i;
	cout<<"factorial of a number="<<n;
}
	return 0;
}
