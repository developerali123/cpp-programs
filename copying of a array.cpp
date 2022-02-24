#include<iostream>
using namespace std;
int main()
{
	int A[10],B[10],C[20];
	cout<<"enter 10 values in array A";
	for(int i=0;i<10;i++)
	cin>>A[i];
	int b=0;
	for (int i=0;i<10;i++)
	{
		B[b]=A[i];
		b++;
	}
	for(int i=0;i<10;i++)
	{
		cout<<B[i]<<" ";
	}
	cout<<endl;
	int c=0;
	for(int i=0;i<10;i++)
	{
		C[c]=A[i];
		c++;
	}
	for (int i=0;i<10;i++)
	{
		C[c]=B[i];
		c++;
	}
	for(int i=0;i<20;i++)
	{
		cout<<C[i]<<" ";
	}
return 0;
}
