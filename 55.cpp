#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter size of array";
	cin>>x;
	if(x>0)
	{
	int *A=new int[x];
	cout<<"enter "<<x<<" numbers";
	for(int i=0;i<x;i++)
	{
		cin>>A[i];
	}
	int x;
	for(int i=0;i<x;i++)
	{
		for(int j=i+1;j<x;j++)
		{
	      if(A[i]<A[j])
	      {
		      x=A[i];
		      A[i]=A[j];
		      A[j]=x;
	      }
       }
   }
	cout<<"minimum number is"<<A[x-2];
}
}
