#include<iostream>
#include <string>
using namespace std;
struct ph
{
	int Mno;
	string Cname;
	int price;
};
struct phone
{
	ph cellphone;
};

int main()
{
	phone P[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter cell phone="<<endl;
		cout<<"model number=";
		cin>>P[i].cellphone.Mno;
		cout<<"company name=";
		cin>>P[i].cellphone.Cname;
		cout<<"price=";
		cin>>P[i].cellphone.price;
	}
	string c;
	cout<<"enter company name to search for details";
	cin>>c;
	for(int i=0;i<5;i++)
	{
		if(P[i].cellphone.Cname==c)
		{
			cout<<"mobile with model "<<P[i].cellphone.Mno<<" manufactured by  "<<c<<" and has price "<<P[i].cellphone.price;
			cout<<endl;
		}
	}
	return 0;
}
