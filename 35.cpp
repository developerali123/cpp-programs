#include<iostream>
using namespace std;
int main()
{
	char A[50];
	int a=0,b=0,c=0;
	cout<<"enter in string without spaces=";
	cin.getline(A,50);
	for(int i=0;i<A[i];i++)
	{
		if(A[i]!=' ')
		b++;
	}
	for(int j=0;j<b;j++)
	{
		c++;
	}
	for(int j=0;j<b;j++)
	{
		for(int k=j+1;k<b;k++)
		{
			if(A[j]==A[k])
			a++;
		}
	}
	cout<<"total number of characters are="<<c-a<<endl;
	return 0;
}
