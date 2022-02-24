#include<iostream>
using namespace std;
int main()
{
	int units,unitcharges;
	cout<<"enter unit consumed=";
	cin>>units;
	if(units<100)
	{
		unitcharges=units*10;
	}
	else if(units<300&&units>100)
	{
		unitcharges=units*15;
}
	else if(units>300)
{
		unitcharges=units*18;
	}
	else
	  {
	   cout<<"wrong input";
}
        int tvcharges=150;
		int bill;
		bill=unitcharges+tvcharges;
		float percentage=(10/100)*bill;
		int totalbill=bill+percentage;
		cout<<"your totalbill is="<<totalbill;
	return 0;
}
