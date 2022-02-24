#include <iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3],C[3][3]; //type arrayName[rows][cols];
	cout<<" Enter 9 values of matrix A\n";
	for(int i=0; i<3; i++) //for rows
		for(int j=0; j<3; j++) //for columns
			cin>>A[i][j];

	cout<<" Enter 9 values of matrix B\n";
	for(int i=0; i<3; i++) //for rows
		for(int j=0; j<3; j++) //for columns
			cin>>B[i][j];

	for(int i=0; i<3; i++) //for rows
		for(int j=0; j<3; j++) //for columns
			C[i][j]=A[i][j]-B[i][j];

	cout<<"Matrix A\n";
	for(int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
				cout<<A[i][j]<<"   ";
			cout<<endl;
		}

	cout<<"Matrix B\n";
	for(int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
				cout<<B[i][j]<<"   ";
			cout<<endl;
		}

	cout<<"Matrix C\n";
	for(int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
				cout<<C[i][j]<<"   ";

			cout<<endl;
		}
	return 0;
}
