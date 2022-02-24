// #include<iostream>
//using namespace std;
//int main()
//{
//	int A[10];
//	for(int i=0;i<10;i++)
//	{
//		cout<<"enter number=";
//		cin>>A[i];
//	}
//	float sum=0,average;
//	for(int i=0;i<10;i++)
//	sum=sum+A[i];
//	average=sum/10;
//	cout<<"average="<<average;
#include<iostream>
using namespace std;
int main()
{
	int a,min,max,b=0;
	float sum=0,average;
	for(int i=0;i<10;i++)
	{
		cout<<"enter number=";
		cin>>a;
		if(b==0)
		{
			max=a;
			min=a;
		}
		else
		{
			if(a>max)
			max=a;
			else
			if(a<min)
			min=a;
		}
		b++;
		sum=sum+a;
		average=sum/10;
	}
		cout<<"Average of 10 numbers"<<average<<endl;
		cout<<"minimum number"<<min<<endl;
		cout<<"maximum number"<<max<<endl;
	return 0;
}
