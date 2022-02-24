#include<iostream>
using namespace std;
int main()
{
	char A[30];
	cout<<"enter a string=";
	cin.getline(A,30);
	int i=0,count=0;
	while(A[i]!=0)
	{
		if(A[i]==' ')
			count++;
			i++;
	}
	cout<<" the number of words are="<<count+1<<endl;
}
