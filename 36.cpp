#include<iostream>
using namespace std;
int main()
{
	int  j,a=0,b=0;
	char A[50];
	cout<<"Enter the string of charater in array = ";
	cin.getline(A,50);
		for(int i=0;i<A[i];i++)
		{
			b++;
		}
		for(int i=0;i<b;i++)
		{
			if(A[i]==A[i]&&A[i]==A[i+1]&&A[i]==A[i+2])
			{
				j=i+2;
			}
			else if(A[i]==A[i]&&A[i]==A[i+1]&&j!=i)
			{
			a++;
		}
   }
     cout<<a<<" triples are in array"<<endl;
     return 0;
 }


