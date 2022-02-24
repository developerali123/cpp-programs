#include<iomanip>
#include<iostream>
using namespace std;

struct student 
{ 
	int rollNo; 
	char name[24];
	float marks[5];
};


int main()
{
	int sum[5],max=0;
	student S[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"enter roll no";
		cin>>S[i].rollNo;
		cin.ignore();
		cout<<"enter Name";
		cin.getline(S[i].name, 25);
		cout<<"enter 5 subjects marks";
		sum[i]=0;
		for(int j=0; j<5; j++)
			{
			cin>>S[i].marks[j];
			sum[i]=sum[i]+S[i].marks[j];
		}
		cout<<"total="<<sum[i]<<endl;
	}
	int a;
	for(int i=0;i<5;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
			a=i;
	}
}
	cout<<setw(10)<<"Roll no"<<setw(20)<<"name of student"<<setw(20)<<"marks"<<endl;
	cout<<setw(10)<<S[a].rollNo<<setw(20)<<S[a].name<<setw(20)<<max<<endl;
		return 0;
}
