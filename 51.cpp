#include <iostream>
using namespace std;
int main()
{
	int row, col;
	cout<<"Enter Rows";
	cin>>row;
	cout<<"Enter Columns";
	cin>>col;
	int* *A=new int*[row];
	for(int i=0; i<row; i++)
		A[i]=new int[col];

	cout<<"Enter "<<row*col<<" values";
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			cin>>A[i][j];
	
	cout<<endl<<endl;
	for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
				cout<<A[i][j]<<"   ";
			cout<<endl;
	}
	return 0;
}
