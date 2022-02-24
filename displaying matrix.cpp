#include <iostream>
using namespace std;
int main()
{
	int A[3][3]; //type arrayName[rows][cols];

	cout<<" Enter 9 values\n";
	for(int i=0; i<3; i++) //for rows
		for(int j=0; j<3; j++) //for columns
			cin>>A[i][j];
	for(int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
				cout<<A[i][j]<<"   ";

			cout<<endl;
		}
	return 0;
}
