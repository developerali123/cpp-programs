#include <iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter number of rows for A matrix: ";
	cin>>r1;
	cout<<"Enter number of columns for A matrix: ";
	cin>>c1;
	cout<<"Enter number of rows for B matrix: ";
	cin>>r2;
	cout<<"Enter number of columns for B matrix: ";
	cin>>c2;
	cout<<endl<<endl;
	if(c1!=r2)
	{
		cout<<"Multiplication is not possible ";
	}
	else
	{
		int* *A=new int*[r1];//will create array of addresses
		for(int i=0; i<r1; i++)//wil create number of arrays for each row
			A[i]=new int[c1];//will assign starting address of each array in the addresses array
		cout<<"Enter "<<r1*c1<<" values for A matrix:\n";
		for(int i=0; i<r1; i++)
			for(int j=0; j<c1; j++)
				cin>>A[i][j];
		
		int* *B=new int*[r2];
		for(int i=0; i<r2; i++)
			B[i]=new int[c2];
		cout<<"Enter "<<r2*c2<<" values for B matrix:\n";
		for(int i=0; i<r2; i++)
			for(int j=0; j<c2; j++)
				cin>>B[i][j];
				
		int* *C=new int*[r1];
		for(int i=0; i<r1; i++)
			C[i]=new int[c2];	
		
		for(int i=0; i<r1; i++)//for every row of A
			for(int j=0; j<c2; j++)//for every column of B
			{
				C[i][j]=0;
				for(int k=0; k<c1; k++)//for columns of A or Rows of B or no of multiplication or addition
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		
		cout<<"Matrix A\n";
		for(int i=0; i<r1; i++)
			{
				for (int j=0; j<c1; j++)
					cout<<A[i][j]<<"   ";
				cout<<endl;
			}

		cout<<"Matrix B\n";
		for(int i=0; i<r2; i++)
			{
				for (int j=0; j<c2; j++)
					cout<<B[i][j]<<"   ";
				cout<<endl;
			}

		cout<<"Matrix C\n";
		for(int i=0; i<r1; i++)
			{
				for (int j=0; j<c2; j++)
					cout<<C[i][j]<<"   ";
				cout<<endl;
			}
	}
	return 0;
}
