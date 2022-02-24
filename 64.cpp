6#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
	int t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	int a=4,b=0;//ARID NUMBER is 504.
	int *p=&a,*q=&b;
	cout<<endl<<endl;
	cout<<"\tlast digit of ARID NUMBER:\t"<<a<<endl;
	cout<<"\tsecond last digit of ARID NUMBER:\t"<<b<<endl;
	cout<<endl<<endl;
	swap(a,b);
	cout<<"\tlast digit of ARID NUMBER after swap:\t"<<a<<endl;
	cout<<"\tsecond last digit of ARID NUMBER after swap:\t"<<b<<endl;
	return 0;
}
