#include<iostream>
using namespace std;
int main()
{
	char A[30];
	cout<<"enter a string=";
	cin.getline(A,30);
	int i=0,j=0;
	char ch;
	cout<<"enter character=";
	cin>>ch;
	while(A[i]!=0)
	{
		if(A[i]==ch)
		{
			j++;
		}
		i++;
	}
    cout<<ch<<" apperars "<<j<<" times";
	return 0;
}
