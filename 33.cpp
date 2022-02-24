#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	char A[30],B;
	int i,j,count=0,max=0;
	cout<<"enter a string="<<endl;
	cin.getline(A,30);
	for(i=0;i<strlen(A);i++)
	{	
		count=0;
		for(j=0;j<strlen(A);j++)
		{
			if(A[i]==A[j])
			{
				count++;
			}
		}
		if(max<count)
		{
			max=count;
			B=A[i];
		}
	}
	cout<<B<<" appears highest "<<max<<" times";
    return 0;
}
