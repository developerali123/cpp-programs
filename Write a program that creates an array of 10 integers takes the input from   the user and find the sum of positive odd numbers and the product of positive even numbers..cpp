#include <iostream>
using namespace std;
int main()
{
   int A[10];
   for(int i=0;i<10;i++)
   {
       cout<<"Enter number:";
       cin>>A[i];
   }
   int sum=0;
   for(int i=0;i<10;i++)
   {
       if(A[i]%2!=0)
       {
           sum=sum+A[i];
       }
   }
  cout<<"Sum of positive odd numbers:"<<sum<<endl;
  int product=1;
     for(int i=0;i<10;i++)
   {
       if(A[i]%2==0)
       {
           product=product*A[i];
       }
   }
  cout<<"Product of positive even numbers:"<<product<<endl;
    return 0;
}
