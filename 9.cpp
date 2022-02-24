#include <iostream>
#include<iomanip>
using namespace std;

struct student //user define type or abstract data type
{
	int rollNo;	//built in data types
	char name[24]; //built in data types
	char fname[24];
	float cgpa; //built in data types

};



int main()
{
	student s[5]; //are the variables of type student(structure)//4+24+24+4=56bytes	
	for(int i=0;i<5;i++)
	{
	cout<<"Enter Roll No"<<endl;
	cin>>s[i].rollNo;
	cin.ignore();
	cout<<"Enter Name";
	cin.getline(s[i].name, 24);
	cout<<"Enter Father Name";
	cin.getline(s[i].fname, 24);
	cout<<"Enter CGPA";
	cin>>s[i].cgpa;
}
	cout<<setw(10)<<"Roll No"<<setw(20)<<"Name"<<setw(20)<<"Father Name"<<setw(10)<<"CGPA"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<setw(10)<<s[i].rollNo<<setw(20)<<s[i].name<<setw(20)<<s[i].fname<<setw(10)<<s[i].cgpa<<endl;
}
	return 0;
}
