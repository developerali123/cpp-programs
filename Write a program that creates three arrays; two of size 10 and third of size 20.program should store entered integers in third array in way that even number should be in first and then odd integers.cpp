#include<iostream>
using namespace std;
int main()
{
	int A[10],B[10],C[20];
	cout<<"enter 10 values in array A=";
	for(int i=0;i<10;i++)
	cin>>A[i];
	cout<<"enter 10 values in array B=";
	for(int j=0;j<10;j++)
	cin>>B[j];
	int c=0;
		for(int i=0;i<10;i++)
	{
		if(A[i]%2==0)
		{
			C[c]=A[i];
			c++;
		}
	}
		for(int i=0;i<10;i++)
		{
		if(B[i]%2==0)
		{
			C[c]=B[i];
			c++;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(A[i]%2!=0)
		{
			C[c]=A[i];
			c++;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(B[i]%2!=0)
		{
			C[c]=B[i];
			c++;
		}
	}
	cout<<"displaying numbers in array C copied from array A and B="<<endl;
	for(int i=0;i<20;i++)
	{
		cout<<C[i]<<" ";
	}
return 0;
}
