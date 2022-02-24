#include<iostream>
#include<cstring>
#include <sstream>
#include<cmath>
using namespace std;
int main()
{
	int toppermarks=0,topperaridnumber=0;
	for(int i=0;i<10;i++)
	{
	cout<<"enter arid number=";
	cin>>topperaridnumber;
	cout<<"enter marks=";
	cin>>toppermarks;
if(toppermarks>=70&&toppermarks<=80)
	{
	cout<<"grade A"<<endl;
}
if(toppermarks>=60&&toppermarks<70)
{
	cout<<"grade B"<<endl;
}
if(toppermarks>=50&&toppermarks<59)
{
	cout<<"grade C"<<endl;
}
if(toppermarks>=40&&toppermarks<49)
{
	cout<<"grade D"<<endl;
}
if(toppermarks>=30&&toppermarks<=39)
{
	cout<<"grade E"<<endl;  
}
}
cout<<"Program developed by 20-ARID-504"<<endl;
cout<<"the highest marks are:"<<toppermarks;
cout<<"for arid number:20-ARID-"<<topperaridnumber<<endl;
return 0;
}
