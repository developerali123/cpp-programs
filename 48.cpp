#include<iostream>
using namespace std;
int main()
{
	int r1,r2,c1,c2;
	cout<<"enter rows for matrix A";
	cin>>r1;
	cout<<"enter cols for matrix A";
	cin>>c1;
	cout<<"enter rows for matrix B";
	cin>>r2;
	cout<<"enter cols for matrix b";
	cin>>c2;
	if(r1*c1==r2*c2)
	{
	int **A=new int*[r1];
	for(int i=0;i<r1;i++)
	A[i]=new int[c1];
	int **B=new int*[r2];
	for(int i=0;i<r2;i++)
	B[i]=new int[c2];
	int **C=new int*[r1];
	for(int i=0;i<r1;i++)
	C[i]=new int[c1];
	cout<<"Matrix A\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
		cin>>A[i][j];
	}
	}
	cout<<endl;
	cout<<"Matrix B\n";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
		cin>>B[i][j];
	}
}
    cout<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	cout<<endl;
	cout<<"displaying Matrix A\n";
    	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
		cout<<A[i][j]<<"  ";
	}
	cout<<endl;
}
    cout<<endl;
    cout<<"displaying Matrix B\n";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
		cout<<B[i][j]<<"  ";
	}
	cout<<endl;
	}
	cout<<endl;
    cout<<"Addition of Matrix A and B\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<C[i][j]<<"  ";
		}
		cout<<endl;
	}
}
else
{
	cout<<"matrix A and B can not be added";
}
return 0;
}
