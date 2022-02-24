#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	cout<<"enter numbers=";
	cin>>a>>b>>c;
	sum=a+b+c;
	cout<<"sum="<<sum<<endl;
	int n;
	if(sum%2==0)
	{
		cout<<"enter number";
		cin>>n;
		if(n<10)
		{
			cout<<"less";
		}
		if(n>10)
		{
			cout<<"greater";
		}
		if(n==10)
		{
			cout<<"equal";
		}
	}
	char ch;
	if(sum%2!=0)
	{
		cout<<"enter character";
		cin>>ch;
		if(ch=='c'||ch=='C')
		{
			cout<<"c++";
		}
		if(ch=='p'||ch=='P')
		{
			cout<<"display programming";
		}
		if (ch=='d'||ch=='D')
		{
			cout<<"developer";
		}
	}
}
