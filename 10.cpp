#include<iostream>
using namespace std;
int main()
{
	int a=0;
	float sum=0,average;
	int n,min,max;
	cout<<"enter numbers=";
	for(int i=0;i<10;i++)
	{
		cin>>n;
		if(a==0)
		{
			max=n;
			min=n;
		}
		else
		{
			if(n>max)	
			max=n;
			else
			if(n<min)
			min=n;
		}
		a++;
		sum=sum+n;
		average=sum/10;
	}
   cout<<"maximum number is = "<<max<<endl;
   cout<<"minimum number is = "<<min<<endl;
   cout<<"average is = "<<average<<endl;
   return 0;
}
