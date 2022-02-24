#include<iostream>
using namespace std;
int main()
{
	for(int j=2;j<20;j++)
	{
//	int n;
//	cout<<"enter any number=";
//	cin>>n;
	bool p=true;
	for(int i=2;i<=j/2;i++)
	if(j%i==0)
	{
		cout<<"not prime number="<<j<<endl;
		p=false;
		break;
	}
	if(p==true)
	{
		cout<<"prime number="<<j<<endl;
	}
}
	return 0;
}
