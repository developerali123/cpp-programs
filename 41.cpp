#include<iostream>
using namespace std;

struct mobile
	{
		int mNo;
		char Cname[24];
		int price;
	};
void input(mobile *A, int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<"enter model number";
			cin>>A[i].mNo;
			cin.ignore();
			cout<<"enter company name";
			cin.getline(A[i].Cname,24);
			cout<<"price";
			cin>>A[i].price;
		}
	}
void display(mobile*A, int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<" "<<A[i].Cname;
		}
	}
void show(mobile*A, int size)
{
	for(int i=0;i<size;i++)
	{
		int max=A[0].price;
		if(max<A[i].price)
		{
			max=A[i].price;
		}
		cout<<;
	}
}
int main()
{
	mobile S[10];
	input(S,10);
	display(S,10);
	show(S,10);
	cout<<endl;
	return 0;
 } 
