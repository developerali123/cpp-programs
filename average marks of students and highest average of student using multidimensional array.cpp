#include <iostream>
using namespace std;
int main()
{
	int A[10][5];

	cout<<"enter marks of 5 subjects for 10 students\n";
	for(int i=0; i<10; i++)
		for(int j=0; j<5; j++)
		{
			cin>>A[i][j];
		}

		int h=0;
	for(int i=0; i<10; i++)
	{ int sum=0;
		for(int j=0; j<5; j++)
		{
			sum=sum+A[i][j];
		}
		cout<<"average of student\n= "<<i<<" = "<<sum/5;
		if(sum/5>h)
			h=sum/5;
	}
	cout<<"heighest average\n="<<h;

	return 0;
}
