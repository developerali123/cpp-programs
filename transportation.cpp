#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"enter number of passenger=";
	cin>>a;
	cout<<"enter number of seats of buses=";
	cin>>b;
	c=a%b;
	if(c!=0)
	{
	d=b-c;
	cout<<"seats left in last bus="<<d<<endl;
	e=(a/b)+1;
	cout<<"total number of buses used in transportation="<<e;
}
	if(c==0)
	{
		d=b-c;
	cout<<"seats left in last bus="<<d<<endl;
	e=(a/b);
	cout<<"total number of buses used in transportation="<<e;
	}
	return 0;
}
