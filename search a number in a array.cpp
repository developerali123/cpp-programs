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
	int n;
	cout<<"enter number to search in array=";
	cin>>n;
	bool b=false;
	for(int i=0;i<10;i++)
	if(n==A[i])
	{
		cout<<"found at index"<<i<<endl;;
		b=true;
	}
	if(b==false)
	{
		cout<<"not found";
	}
	return 0;
}
