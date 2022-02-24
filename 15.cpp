#include <iostream>
#include <string>
using namespace std;

struct add
{
	int hNo;
	int sNo;
	string city;
};
struct student
{
	int rollNo;
	char name[30];
	add address; //nested structure
};


int main()
{
	student S[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Roll No=";
		cin>>S[i].rollNo;
		cin.ignore();
		cout<<"Enter Name=";
		cin.getline(S[i].name, 30);
		cout<<"Enter Address="<<endl;
		cout<<"Enter House No=";
		cin>>S[i].address.hNo;
		cout<<"Enter Streat No=";
		cin>>S[i].address.sNo;
		cout<<"Enter City=";
		cin>>S[i].address.city;
	}
	string c;
	cout<<"Enter city you want to search students from that=";
	cin>>c;
	for(int i=0; i<5; i++)
	{
		if(S[i].address.city==c)
		{
			cout<<S[i].name<< " lives in "<<"house no"<<S[i].address.hNo<<","<<"street no"<<S[i].address.sNo<<","<<"city"<<" "<<c;
		}
	}
	return 0;
}
