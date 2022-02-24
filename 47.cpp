#include<iostream>
using namespace std;

struct student
{
	int rollno;
	char name[24];
};
int main()
{
	int x;
	cout<<"enter size of array";
	cin>>x;
	int *S=new int[x];
	for(int i=0;i<x;i++)
	cout<<"enter roll number";
	cin>>S[i].rollno;
	cin.ignore();
	cout<<"enter name";
	cin.getline(S[i].name,x);
	return 0;
}
