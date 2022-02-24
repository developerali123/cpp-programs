#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter number=";
	cin>>n;
	m=n%2;
	if(m==0)
	{
		cout<<"even number"<<endl;
		cout<<"the number is converted to odd="<<n+1;
	}
	else
	{
		cout<<"odd number"<<endl;
		cout<<"the number is converted to even="<<n+1;
	}
	return 0;
}
