#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int count;//global variable
int UIIT=0,UIMS=0;
struct dep
{
int id;
string name;
string cont_no;	
};
struct student
{
    int rollno;
    string Sname;
    string Fname;
    dep DEPT_ID;
};
void input(student S[],int count)
{
	S[0].rollno=504;
	S[0].Sname="ali";
	S[0].Fname="mirza";
	S[0].DEPT_ID.name="UIIT";
	S[0].DEPT_ID.cont_no="0300-1234567";
	for(int i=1;i<count;i++)
	{
		cout<<"enter "<<i+1<<" Roll number:\t";
		cin>>S[i].rollno;
		cin.ignore();
		cout<<"enter "<<i+1<<" Sname:\t";
		cin>>S[i].Sname;
		cout<<"enter "<<i+1<<" Fname:\t";
		cin>>S[i].Fname;
		cout<<"enter "<<i+1<<" departement ID:\t";
		cin>>S[i].DEPT_ID.id;
    	if(S[i].DEPT_ID.id==1)
    	{
    		UIIT++;
    		S[i].DEPT_ID.name="UIIT";
    		S[i].DEPT_ID.cont_no="0300-1234567";
		}
		else if(S[i].DEPT_ID.id==2)
		{
			UIMS++;
			S[i].DEPT_ID.name="UIMS";
			S[i].DEPT_ID.cont_no="0300-4567891";
		}
		else
		{
		cout<<"no such departement exits";
		break;
	}
}
	}
int main()
{
    student S[100];
    cout<<"How many records of user you want to enter:\t";
    cin>>count;
    input(S,count);
    cout<<endl;
    cout<<"total students enrolled:\t"<<count<<endl;
    cout<<"total students in UIIT:\t"<<UIIT<<endl;
    cout<<"total students in UIMS:\t"<<UIMS<<endl;
    cout<<"Seats vaccunt:\t"<<100-count;
    cout<<endl;
    cout<<setw(10)<<"Roll No"<<setw(10)<<"Sname"<<setw(10)<<"Fname\t"<<setw(10)<<"Departenment name"<<setw(15)<<"Contact No"<<endl;
    for(int i=0;i<count;i++)
    {
    	
    	cout<<setw(10)<<S[i].rollno<<setw(10)<<S[i].Sname<<setw(10)<<setw(10)<<S[i].Fname<<setw(10)<<S[i].DEPT_ID.name<<setw(10)<<"\t"<<S[i].DEPT_ID.cont_no<<endl;
	}
	return 0;
}

