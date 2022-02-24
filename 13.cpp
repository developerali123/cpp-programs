#include <iostream>
#include <iomanip>

using namespace std;


struct student //structure definition
{ //start
	int rollNo; //members
	char name[24];
	float marks[5];
}; //semicolon is must
//struct student
//{};

//struct abc;

int main()
{
	student S[5];
	int sum=0;
	for(int i=0; i<5; i++)
	{
		cout<<"enter roll no";
		cin>>S[i].rollNo;
		cin.ignore();
		cout<<"enter Name";
		cin.getline(S[i].name, 25);
		cout<<"enter 5 subjects marks";
		for(int j=0; j<5; j++)
		{
				cin>>S[i].marks[j];
				sum=sum+S[i].marks[j];
			}
	}
	
	cout<<setw(10)<<"Roll No"<<setw(20)<<"Name"<<setw(15)<<"Total"<<endl;

	for(int i=0; i<5; i++)
	{
		cout<<setw(10)<<S[i].rollNo<<setw(20)<<S[i].name<<setw(15)<<sum<<endl;
	}
			return 0;
}
