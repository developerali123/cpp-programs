#include <iostream>
#include <string>
using namespace std;
struct DateofBirth
{
	int day;
	int month;
	int year;
};
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
	DateofBirth dob;

};


int main()
{
	student S[5];
	for(int i=0; i<5; i++)
	{
		do{
		cout<<"Enter Roll No";
		cin>>S[i].rollNo;
		}while(S[i].rollNo<1||S[i].rollNo>100);
		cin.ignore();
		cout<<"Enter Name";
		cin.getline(S[i].name, 30);
		cout<<"Enter Address"<<endl;
		cout<<"Enter House No";
		cin>>S[i].address.hNo;
		cout<<"Enter Streat No";
		cin>>S[i].address.sNo;
		cout<<"Enter City";
		cin>>S[i].address.city;
		do{
			cout<<"Enter Year";
			cin>>S[i].dob.year;
		}while(S[i].dob.year<2000||S[i].dob.year>2015);
		do{
			cout<<"Enter Month";
			cin>>S[i].dob.month;
		}while(S[i].dob.month<1||S[i].dob.month>12);
		cout<<"Enter Day";
		do{
			cin>>S[i].dob.day;
		}while (S[i].dob.day<1||S[i].dob.day>31);
	}
	string c;
	cout<<"Enter city you want to search students from that";
	cin>>c;
	for(int i=0; i<5; i++)
	{
		if(S[i].address.city==c)
		{
			cout<<S[i].name<< " lives in "<<c<<endl;
		}
	}
	for(int i=0; i<5; i++)
	{
		{
			cout<<S[i].name<< "  "<<S[i].dob.day<<"-"<<S[i].dob.month<<"-"<<S[i].dob.year<<endl;
		}
	}
	return 0;
}
