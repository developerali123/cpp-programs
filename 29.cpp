#include<iostream>
using namespace std;
int main()
{
	char A[30];
	cout<<"enter a string of alphabets=";
	cin.getline(A,30);
	int i=0;
	while(A[i]!=0)
	{
		if(A[i]>=97&&A[i]<=123)
		A[i]=A[i]-32;
		i++;
	}
	cout<<A;
}
