#include <iostream>
using namespace std;
 
struct student
{
	int rollno;
	char name[24];
};
void input(student *A, int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"enter rollno";
		cin>>A[i].rollno;
		cin.ignore();
		cout<<"enter name";
		cin.getline(A[i].name,24);

	}
}
void display(student *A, int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<A[i].rollno;
	
		cout<<"   "<< A[i].name<<endl;

	}
}
int main()
{
	student S[3], T[2];
	 input(S, 3);
	 input(T, 2);
	display(T, 2);
	display (S,3);
	return 0;
}
