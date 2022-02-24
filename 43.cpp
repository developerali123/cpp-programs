#include<iostream>
using namespace std;
 
void swap(int x, int y)//parameters passed by value
{
	cout<<"value inside functin def x = "<<x<<endl;
	cout<<"value inside functin def y= "<<y<<endl;
	int t=x;
	x=y;
	y=t;
	cout<<"value inside functin after swap x = "<<x<<endl;
	cout<<"value inside functin after swap y= "<<y<<endl;
}

void change(int &x, int &y)//parameters passed by reference
{
	cout<<"value inside functin def x = "<<x<<endl;
	cout<<"value inside functin def y= "<<y<<endl;
	int t=x;
	x=y;
	y=t;
	cout<<"value inside functin after swap x = "<<x<<endl;
	cout<<"value inside functin after swap y= "<<y<<endl;
}

void add(int A[])
{
	for(int i=0; i<5; i++)
		A[i]=A[i]+5;
}
int main()
{
	int a=5,b=10;
	cout<<"value before functin call a = "<<a<<endl;
	cout<<"value before functin call b= "<<b<<endl;
	swap(a,b);
	cout<<"value after functin call a = "<<a<<endl;
	cout<<"value after functin call b= "<<b<<endl;
	
	int c=5,d=10;
	cout<<"value before functin call a = "<<c<<endl;
	cout<<"value before functin call b= "<<d<<endl;
	change(c,d);
	cout<<"value after functin call a = "<<c<<endl;
	cout<<"value after functin call b= "<<d<<endl;
	
		int A[5]={1, 2, 3, 4, 5};
	cout<<"Before function call\n";
	for(int i=0; i<5; i++)
		cout<<A[i]<<"     ";
	add(A);//by default array are passed by reference
	cout<<"\nAfter function call\n";
	for(int i=0; i<5; i++)
		cout<<A[i]<<"     ";
	return 0;
}
