#include <iostream>
using namespace std;
int main() 
{
	int n;
	cout<<"Enter any  number:";
	cin>>n;
	switch(n)
	 {
	    case 5:
		{
		   for(int i=1;i<=n;i++  )
	      {
		   for(int j=i;j<=n;j++)
		   {
		       cout<<j<<" ";   		     
		   }
		  
		    if(i>=2&&i<=4 )  
			{
			    for(int k=1;k<=i-1;k++)
			   	 {
			   	   cout<<k<<" ";	
				 }
			   } 
			   else if(i>4)
			   {
			   	for(int m=i-1;m>=1;m-- )
			   	{
			   		cout<<m<<" ";
				   }
			   }	
		    cout<<endl;	
	      }	
		}break;
		default :
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=i;j<=n;j++)
					{
						cout<<j<<" ";
					}
					for(int k=1;k<=i-1;k++ )
					{
						cout<<k<<" ";
					}
					cout<<endl;
				}
			}break;	 	
	 }	
	return 0;
}
