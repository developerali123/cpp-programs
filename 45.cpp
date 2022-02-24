#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student
{
	int rollno;
	char name[30];
	char degreename[30];
	char ch;
	int bookno;
	char title[50];
	char authorname[50];
	int price;
};
void input(student S[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"enter roll number";
		cin>>S[i].rollno;
		cin.ignore();
		cout<<"enter student name";
		cin.getline(S[i].name,30);
		cout<<"enter class";
		cin.getline(S[i].degreename,30);
		cout<<"enter section";
		cin>>S[i].ch;
		cout<<"enter book no";
	    cin>>S[i].bookno;
	    cin.ignore();
	    cout<<"enter title";
	    cin.getline(S[i].title,50);
 	    cout<<"enter author name";
	    cin.getline(S[i].authorname,50);
	    cout<<"enter price";
	    cin>>S[i].price;
	}
}

void display(student S[],int size)
{
	string c;
	cout<<"enter book you have issued=";
	cin>>c;
	
	cout<<setw(10)<<"roll number"<<setw(10)<<"student name"<<setw(10)<<"degree name"<<setw(10)<<"section"<<endl;
	for(int i=0;i<size;i++)
	{
	if(S[i].title==c)
	{
	cout<<setw(10)<<S[i].rollno<<setw(10)<<S[i].name<<setw(10)<<S[i].degreename<<setw(10)<<S[i].ch<<endl;
}
}
}
int main()
{
	student S[3];
	input(S,3);
	display(S,3);
	return 0;
}
