#include<iostream>
using namespace std;
int main()
{
	char A[20];
	cout<<"enter a string for character array A=";
	cin.getline(A,20);
	int i=0;
	while(A[i]!=0)
	{
		i++;
	}
	cout<<"the number of characters="<<i<<endl;
	return 0;
}
