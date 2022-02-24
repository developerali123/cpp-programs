#include<iostream>
#include<iomanip>
using namespace std;
reverseArray(float A[],int size)
{
	cout<<"enter floating values";
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	cout<<setw(10)<<"1"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<A[i]<<" ";
	}
}
int main()
{
	float A[5];
	reverseArray(A,5);
}
