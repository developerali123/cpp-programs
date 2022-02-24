#include<iostream>
using namespace std;
int main()
{
	float A[5],sum=0,totalmarks=500,percentage;
	for(int i=0;i<5;i++)
	{
		cout<<"enter number=";
		cin>>A[i];
		sum=sum+A[i];
}
percentage=(sum/totalmarks)*100;
	cout<<"percentage="<<percentage<<endl;
	if(percentage<=100&&percentage>=90)
	{
		cout<<"A+ grade\n";
		cout<<"pass\n";
	}
	if(percentage<90&&percentage>=80)
	{
		cout<<"A grade\n";
		cout<<"pass\n";
	}
	if(percentage<79&&percentage>=70)
	{
		cout<<"B grade\n";
		cout<<"pass\n";
	}
	if(percentage<69&&percentage>=600)
	{
		cout<<"C grade\n";
		cout<<"pass\n";
	}
	if(percentage<59&&percentage>=50)
	{
		cout<<"D grade\n";
		cout<<"pass\n";
	}
	if(percentage<50)
	{
		cout<<"fail\n";
	}
	return 0;
}
