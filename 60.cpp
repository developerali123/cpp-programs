#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int x;
	cout<<"Enter size of array(must be positive number) :";
	cin>>x;
	int *a=new int [x];

	cout<<"Enter "<<x<<" numbrrs for array : ";
	for(int i=0;i<x;i++)
	cin>>a[i];
	
	for(int i=0;i<x;i++)
	cout<<a[i]<<"	";
	
	for(int i=0;i<x;i++) 
	for(int j=i+1;j<x;j++) 
    if(a[i]>a[j])
    {
	int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
	}

	cout<<endl;
    cout<<"Third maximum number :"<<a[x-3]<<endl;
    cout<<"Third minimum number :"<<a[2]<<endl;
return 0;
}
