#include<iostream>
#include<string.h>
using namespace std;
int main()	
{	
	char c[100];
	char ch;
	cout<<"enter any string=";
	cin.getline(c,100);
	for(int i=strlen(c);i>=0;i--)
	for(int j=strlen(c);j>=i;j--)
	if(c[i]<c[j])
	{
		ch=c[i];
		c[i]=c[j];
		c[j]=ch;
	}
	cout<<"descending order of array is="<<c<<endl;
	return 0;
}

