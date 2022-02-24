#include<iostream>
#include<math.h>
using namespace std;
int * ToBinary(int n) 
{ 
    int A[10],i=0; 
    while(n>0) 
	{ 
        A[i]=n%2; 
        n=n/2; 
        i++; 
    } 
    for(int j=i-1;j>=0;j--) 
    cout<<A[j];  
}
int main() 
{
int a1,a2;
cout<<"Enter First Integer (last 2 digit of out arid number):";
cin>>a1;
cout<<"\n\nEnter Second Integer (Any number between 1-100):";
cin>>a2;
cout<<"First Binary Conversion:";
int *b1;
b1=ToBinary(a1);
cout<<"\nSecond Binary Conversion:";
int *b2;
b2=ToBinary(a2);
int c=a1+a2;
cout<<"\n\nAnswer Binary Conversion:";
int *ans;
ans=ToBinary(c);
cout<<"\nThe answer in decimal is:"<<c;
return 0;
}
