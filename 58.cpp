#include<iostream>
#include<iomanip>
using namespace std;

struct student 
{ 
	int rollNo; 
	char name[24];
	float marks[5];	
}; 
void input(student S[], int n)
{
	cout<<"Enter "<<n<<" students data\n";
		for(int i=0; i<n; i++)
		{
			cout<<"Enter Roll no";
			cin>>S[i].rollNo;
			cin.ignore();
			cout<<"Enter Name";
			cin>>S[i].name;
			cout<<"Enter 5 subjects marks";
			for(int j=0; j<5; j++)
				cin>>S[i].marks[j];
		}
}
void display(student *S, int n)
{
	cout<<setw(10)<<"Roll No"<<setw(20)<<"Name"<<setw(10)<<"S1"<<setw(10)<<"S2"<<setw(10)<<"S3"<<setw(10)<<"S4"<<setw(10)<<"S5"<<endl;
		for(int i=0; i<n; i++)
		{
			cout<<setw(10)<<S[i].rollNo<<setw(20)<<S[i].name;
			for(int j=0; j<5; j++)
				cout<<setw(10)<<S[i].marks[j];
			cout<<endl;
		}
}
int main()
{
	int n;
	cout<<"Enter number of students";
	cin>>n;
	student *S=new student[n];
	input(S, n);
	display(S, n);
	return 0;
}
