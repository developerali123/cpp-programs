#include<iostream>
using namespace std;
int main()
{
	char A[15],B[15];
	cout<<"enter string in character A=";
	cin.getline(A,15);
	int i=0,j=0;
	while(A[i]!=0)
	{
		B[j++]=A[i++];
	}
	B[j++]='\0';
	cout<<"string in character B="<<B<<endl;
}
