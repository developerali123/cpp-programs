#include<iostream>
using namespace std;
int main()
{
	int a=5;
	cout<<"a= " <<a<<endl;
	cout<<"Address = "<<&a<<endl;
	//int p=&a;//can not assign address to integer var
	//then we need pointer (to store address)
	int *p=&a;//p is a pointer
	cout<<"address of a in p "<<p<<endl;
	double b=23;//pointer should be of the same type 
	double *r=&b;// r is pointer

	cout<<"address of b = "<<&b<<endl; //display address of variable b
	cout<<"address of b using r = "<<r<<endl; //display address of var b using pointer r

	cout<<"b= "<<b<<endl;//value of var b
	cout<<"b= "<<*r<<endl;//value of var using pointer r

	b=b+5;//add 5 to value of b
	b=*r+5;//add 5 to var b using pointer r
	*r=*r+5;//add 5 to var b using pointer r
	cout<<"B= "<<b<<endl;
	
	cout<<"enter value of b"<<endl;
	cin>>b;
	cout<<"b="<<b<<endl;
	cout<<"Enter value of b using pointer r";
	cin>>*r;
	cout<<"b="<<b<<endl;
	
	int A[5]; //array is a pointer
	cout<<"enter 5 values in array"<<endl;
	for(int i=0; i<5; i++)
		cin>>*(A+i); //cin>>A[i]; //both are same
	for(int i=0; i<5; i++)
		cout<<*(A+i)<<"    "<<(A+i)<<endl; //cout<<A[i]
	double B[5]; //array name is a pointer
	cout<<"enter 5 values in array"<<endl;
	for(int i=0; i<5; i++)
		cin>>*(B+i); //cin>>A[i]; //both are same
	for(int i=0; i<5; i++)
		cout<<*(B+i)<<"    "<<(B+i)<<endl; //cout<<A[i]
		
	int x;
	int*v=&x;
	cout<<"enter 5 values in array"<<endl;
	for(int i=0; i<5; i++)
		cin>>*(v+i);
	for(int i=0; i<5; i++)
		cout<<*(v+i)<<"    "<<(v+i)<<endl;
	return 0;
}
