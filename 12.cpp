#include<iostream>
using namespace std;
int main()
{
	int A[10],a;
	cout<<"enter ten numbers=";
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(A[j]>A[j+1])
			{
				a=A[j];
				A[j]=A[j+1];
				A[j+1]=a;
			}
		}
	}
	cout<<"displaying numbers in ascending order="<<endl;
	for(int j=0;j<10;j++)
	{
		cout<<A[j]<<endl;
	}
	return 0;
}
