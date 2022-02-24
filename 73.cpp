#include<iostream>
using namespace std;
int main()
 {
int k;
cout<<"Please enter a Number: ";
cin>>k;
for(int j=1;j<=k;j++)
{
for(int i=j;i<=k;i++)
cout<<i<<"\t";
for(int k=1;k<j;k++)
cout<<k<<"\t";
cout<<endl;
}
 system("pause");
 return 0;
 }
