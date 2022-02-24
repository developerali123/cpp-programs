#include<iostream>
using namespace std;
int main()
{
	int A[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter number=";
		cin>>A[i];
	}
	int min=A[0];
	for(int i=0;i<10;i++)
	{
	if(min>A[i])
		min=A[i];
	}
		cout<<"minium number in array is="<<min<<endl;
	int max=A[0];
	for(int i=0;i<10;i++)
	{
	if(max<A[i])
	max=A[i];
    }
	cout<<"maximum number in array is="<<max<<endl;
	float sum=0,average;
	for(int i=0;i<10;i++)
	sum=sum+A[i];
	average=sum/10;
	cout<<"average="<<average;
	return 0;
}
