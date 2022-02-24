#include<iostream>
using namespace std;
int main()
{
	char a[100],b[100],c[200];
	cout<<"enter string for character array A=";
	cin.getline(a,100);
	cout<<"enter string for character array B=";
	cin.getline(b,100);
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	int i=0,z=0;
	while(a[i]!=0)
	{
		c[z++]=a[i++];
	}
	c[z++]=' ';
	int j=0;
	while(b[j]!=0)
	{
		c[z++]=b[j++];
	}
	c[z++]='\0';
	cout<<"C="<<c<<endl;
	return 0;
}
