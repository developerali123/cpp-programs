#include<iostream>
using namespace std;
int main()
{
	int r1,c1;
	cout<<"enter number of rows";
	cin>>r1;
	cout<<"enter numbers of columns";
	cin>>c1;
	int* *A=new int*[r1];
	for(int i=0;i<r1;i++)
	A[i]=new int[c1];
	cout<<"enter "<<r1*c1<<" values\n";
	for(int i=0;i<r1;i++)
	for(int j=0;j<c1;j++) 
	cin>>A[i][j];
	cout<<"matrix A\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		cout<<A[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<"transpose of A\n";
		for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		cout<<A[j][i]<<" ";
		cout<<endl;
	}
	return 0;
}
