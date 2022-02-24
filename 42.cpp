#include <iostream>
using namespace std;
 
int sum(int a, int b)
{
	//int c=a+b;
	return a+b;
}
void inc(int c)// passing parameter by value
{// this variable a inside the functino is different from the variable a used in main function.
	cout<<"value of a inside function before increment is "<<c<<endl;

	c=c+5;
	cout<<"value of a inside function after increment is "<<c<<endl;

}
void alt(int &d)// passing parameter by reference
{// this variable a inside the functino is same as the variable a used in the main function.
	cout<<"value of a inside function before increment is "<<d<<endl;

	d=d+5;
	cout<<"value of a inside function after increment is "<<d<<endl;

}

int main()
{
	cout<<"sum="<<sum(3,8)<<endl;
	int x=5, y=10;
	int z=sum(x,y);
	cout<<"sum="<<z<<endl;
	int sqr=sum(x,y)*sum(x,y);
	cout<<"square of sum of x, y = "<<sqr<<endl;
	
	int c=5;
	cout<<"value before functin call = "<<c<<endl;
	inc(c);
	cout<<"value after function call =" <<c<<endl;
	
	int d=5;
	cout<<"value before functin call = "<<d<<endl;
	alt(d);
	cout<<"value after function call =" <<d<<endl;
	return 0;
}
