#include<iostream>
using namespace std;
int main()
{
	char A[20];
	cout<<"enter string in character A=";
	cin.getline(A,20);
	char B;
	cout<<"enter character=";
	cin>>B;
	int i=0;
	while(A[i]!=0)
	{
		if(A[i]==B)
		cout<<"found at index="<<i<<endl;
		i++;
	}
}
