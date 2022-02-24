#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		cout<<""<<"("<<i<<","<<j<<")";
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i>=j)
		{
			cout<<""<<"("<<i<<","<<j<<")";
		}
		else
		cout<<"     ";
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i<=j)
		{
			cout<<""<<"("<<i<<","<<j<<")";
		}
		else
		cout<<"     ";
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=5;j++)
		if(i<=j)
		{
		cout<<"("<<i<<","<<j<<")";
	}
	else
	cout<<"     ";
	cout<<endl;
}
cout<<endl;

for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=5;j++)
		if(i>=j)
		{
		cout<<"("<<i<<","<<j<<")";
	}
	else
	cout<<"     ";
	cout<<endl;
}
cout<<endl;

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i==j)
		{
			cout<<""<<"("<<i<<","<<j<<")";
		}
		else
		cout<<"     ";
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i==1 || i==5 || j==5 || j==1)
		{
		cout<<"("<<i<<","<<j<<")";
	}
	else
	cout<<"     ";
	cout<<endl;
}
cout<<endl;

for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i>=j)
		{
			cout<<""<<"("<<i<<","<<j<<")";
		}
		else
	cout<<"     ";
	cout<<endl;
	}
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=5;j++)
		if(i>=j)
		{
		cout<<"("<<i<<","<<j<<")";
	}
	else
	cout<<"     ";
	cout<<endl;
}
cout<<endl;

for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		if(i<=j)
		{
			cout<<""<<"("<<i<<","<<j<<")";
		}
		else
		cout<<"     ";
		cout<<endl;
	}
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=5;j++)
		if(i<=j)
		{
		cout<<"("<<i<<","<<j<<")";
	}
	else
	cout<<"     ";
	cout<<endl;
}
cout<<endl;
	return 0;
	}
