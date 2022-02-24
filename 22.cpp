#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter number=";
    cin>>n;
    next=first+second;
    while(next<=n)
    {
        first=second;
        second=next;
        next=first+second;
    }
    cout<<endl;
    cout<<"Fibonacis Series in reverse order="<<second<<" "<<first<<" ";
    next=second-first;
    do{
       cout<<next<<" ";
       second=first;
	   first=next;
	   next=second-first;
     }while(next>0);
    cout<<"0";
	return 0;
}
