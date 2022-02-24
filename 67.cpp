#include<iostream>
using namespace std;
int main()
{
	
	char ch,al;
	int i=0,j=0;
	do{
		char A[1000];
	cout<<"\tenter a paragraph\t"<<endl<<endl;;
	cin.getline(A,1000);
	
	cout<<"\n\tenter starting character of your name:\t";
	cin>>ch;
	
	while(A[i]!=0)
	{
		if(A[i]==ch)
		{
			j++;
		}
		i++;
	}
	cout<<"Muhammad Ali Mirza"<<endl<<endl;
	cout<<ch<<" apperars "<<j<<" times";
	cout<<"Do you want to search another character(y/n)";
	cin>>al;
}while(al=='y'||al=='Y');
}
