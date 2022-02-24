#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char A[30];
	cout<<"enter the string=";
	cin.getline(A,30);
	int i,j=strlen(A)-1;//strelen initializes a null character
	bool x=true;
	for(i=0;i<j;i++)
	{
		if(A[i]!=A[j])
		{
			x=false;
		}
		j--;
	}
	if(x)
	{
		cout<<"yes the string is palidrome"<<endl;
	}
	else
	{
		cout<<"not palidrome"<<endl;
	}
	return 0;
}
