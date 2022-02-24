#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter X to display the paragragh stored in array  :";
	do
	{
		cin>>ch;
		if(ch=='X')
		{
			cout<<"C++ is a very extensive language that can be used both within basic structured and object oriented programming.\n C++ is mostly used in the situation where processor time and performance are ultimate,\n this is due to the fact that C++ compiler optimizes the code to each specific processor type";
		}
		else{
			cout<<"invalid voice"<<endl;
		}
	}while(ch!='X');
}
