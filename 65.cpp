#include<iostream>
using namespace std;
int main()
{
	char ch;
	int l1,l2,l3;
	int w1,w2,w3;
	int area1,area2,area3;
	int total_area;
	int total_bughet=20000;
	cout<<"\tROOM 1\t";
	cout<<endl;
	cout<<"enter length of your room in feets:\t";
	cin>>l1;
	cout<<"enter width of your room in feets:\t";
	cin>>w1;
	area1=l1*w1;
	cout<<"area of your room in square feets:\t"<<area1;
	cout<<endl;
	cout<<"\tROOM 2\t";
	cout<<endl;
	cout<<"enter length of your brother room in feets:\t";
	cin>>l2;
	cout<<"enter width of your brother room in feets:\t";
	cin>>w2;
	area2=l2*w2;
	cout<<"area of your brother room in square feets:\t"<<area2;
	cout<<endl;
	cout<<"\tROOM 3\t";
	cout<<endl;
	cout<<"enter length of your father room in feets:\t";
	cin>>l3;
	cout<<"enter width of your father room in feets:\t";
	cin>>w3;
	area3=l3*w3;
	cout<<"area of your father room in square feets:\t"<<area3;
	cout<<endl;  
	total_area=area1+area2+area3;
	cout<<"total area:\t"<<total_area<<endl;
	do{
	int a;
	cout<<"carpets available in market with different prices\n 1)Rs20 per square feet\n 2)Rs25 per square feet\n 3)Rs35 per square feet\n 4)Rs40 per square feet\n";
	cin>>a;
	switch(a)
	{
		case 1:total_area*=20;
				if(total_area<=total_bughet)
				{
					cout<<"you can buy carpet for all rooms that price is Rs20 per square feet\n and its price will be"<<total_area<<endl;
				}
				else
				{
				cout<<"you cannot buy carpets in bughet you allocated\n";
			}
				break;
    case 2:total_area*=25;
    		 if(total_area<=total_bughet)
    		 {
    		 	cout<<"you can buy carpet for all rooms that price is Rs25 per square feet\n and its price will be"<<total_area<<endl;
			 }
			 else
			 {
			 cout<<"you cannot buy carpets in bughet you allocated\n";
		}
			 break;
    case 3:total_area*=35;
    		if(total_area<=total_bughet)
    		{
    			cout<<"you can buy carpet for all rooms that price is Rs35 per square feet\n and its price will be"<<total_area<<endl;
			}
			else
			{
			cout<<"you cannot buy carpets in bughet you allocated\n";
		}
			break;
    case 4:total_area*=40;
    		 if(total_area<=total_bughet)
    		 {
    		 	cout<<"you can buy carpet for all rooms that price is Rs40 per square feet\n and its price will be"<<total_area<<endl;
			 }
			 else
			{
			cout<<"you cannot buy carpets in bughet you allocated\n";
		}
			break;
			default:cout<<"invalid choice";
	}
		cout<<"you want to continue(y/n)";
	cin>>ch;
   }while(ch=='y'||ch=='Y'); 
   return 0;
}
