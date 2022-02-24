#include<iostream>
using namespace std;
int main()
{ char c[100];
cout<<"enter a word=";
cin.getline(c,100);
cout<<c<<endl;
int i=0;
while(c[i]!=0)
i++;
cout<<"number of characters="<<i<<endl;
i=0;
while(c[i]!=0)
{
	if(c[i]>=97&&c[i]<=123)
	c[i]=c[i]-32;
	i++;
}
cout<<c<<endl;
cout<<"enter a word=";
cin.getline(c,100);
i=0;
int count=0;
while(c[i]!=0)
{
	if(c[i]==' ')
	count++;
	i++;
}
cout<<"number of words="<<count+1<<endl;
char ch;
cout<<"character to search=";
cin>>ch;
i=0;
while(c[i]!=0)
{
	if(c[i]==ch)
	cout<<"found at index="<<i<<endl;
	i++;
}
	return 0;
}
