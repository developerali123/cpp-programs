#include<iostream>
using namespace std;
reverseDigit(int n)
{
	cout<<"enter digit   :";
	cin>>n;
	int n1=n/100;
	n=n%100;
	int n2=n/10;
	n=n%10;
	cout<<n<<" "<<n2<<" "<<n1<<endl;
}
int main()
{
	for(int i=0;i<10;i++)
	{
	int n;
	reverseDigit(n);
}
}
