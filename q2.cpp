#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	double fix[4]={10000, 100000, 1000000, 5000000};
	double prof[4]={6.7,6.9,7.6,7.9};
	double prof1[4]={9.7,9.9,10.4,11.0};
	do{
		cout<<"Enter\n1-Behbood certificate\n2-regular income certificate\n";
		cin>>a;
		if(a!=1&&a!=2)
		{
				cout<<"Wrong input\n";
			}
		cout<<"Enter\n1-Monthly\n2-Quarterly \n3-6 months \n4-anually\n";
		cin>>b;
			if(b<=0||b>=5)
			{
				cout<<"Wrong input\n";
			}
		if(a==1)
		{
			double c=fix[b-1];
			double d=prof[b-1];
			double result=(c*d)/100;
			result+=920;
			int bonus;
			cout<<"enter your arid number=";
			cin>>bonus;
			cout<<"Profit is: "<<result+bonus<<endl;
		}
		else if(a==2)
		{
			double c=fix[b-1];
			double d=prof1[b-1];
			double result=(c*d)/100;
			result+=920;
			int bonus;
			cout<<"enter your arid number=";
			cin>>bonus;
			cout<<"Profit is: "<<result+bonus<<endl;
		}
	}while(a!=9); 
	return 0;
}
