#include <iostream>
#include <iomanip>
using namespace std;

struct student 
{ 
	int rollNo; 
	char name[24];
	float marks[5];	
}; 
void input(student S[], int n)
{
	cout<<"Enter  students data\n";
			cout<<"Enter Roll no";
			cin>>S[n].rollNo;
			cin.ignore();
			cout<<"Enter Name";
			cin>>S[n].name;
			cout<<"Enter 5 subjects marks";
			for(int j=0; j<5; j++)
				cin>>S[n].marks[j];
		
}
void display(student *S, int n)
{
	cout<<setw(10)<<"Roll No"<<setw(20)<<"Name"<<setw(10)<<"S1"<<setw(10)<<"S2"<<setw(10)<<"S3"<<setw(10)<<"S4"<<setw(10)<<"S5"<<endl;
		for(int i=0; i<=n; i++)
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
	int no=-1;
	int choice;
	do{
		cout<<"Enter 1 to add new student\n";
		cout<<"Enter 2 to view all students\n";
		cout<<"Enter your choice";
		cin>>choice;
		switch(choice)
		{
		case 1:
			no++;
			input(S, no);
			break;
		case 2:
			display(S, no);
			break;
		default:
			cout<<"you entered an invalid choice";
		}
		cout<<"enter any number other than zero to repeat";
		cin>>choice;
	}while(choice!=0);
	return 0;
}
