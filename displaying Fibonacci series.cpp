#include<iostream>
using namespace std;
int main()
{
	int n,first=0,second=1,next;
	cout<<"enter number=";
	cin>>n;
	cout<<endl;
	cout<<"Fibonacci series="<<first<<" "<<second<<" ";
	next=first+second;
	while(next<=n)
	{
		cout<<next<<" ";
		first=second;
		second=next;
		next=first+second;
	}
	return 0;
}
