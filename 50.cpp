#include <iostream>
using namespace std;
int main()
{
	int A[5];//static array bcz size is mentioned during code
	int x;
	cout<<"enter size of array";
	cin>>x;
	int B[x];//expression must have a constant value
	int *C=new int[x];//dynamic array or memory allocation whose size is specified during run time, new is researve word used for run time memory allocation,x is size of array, int is type of contents to be stored in array, *C is a pointer used to store address, int *c is type of pointer
	//pointer should same as type of contents
	//x consective memory locations will be reserved and starting address will be assigned to pointer c
	float *D=new float[x];
	double *E=new double[x];
	cout<<"enter "<<x<<" numbers";
	for(int i=0;i<x;i++)
	cin>>B[i];
	cout<<endl<<endl;
	for(int i=0; i<x; i++)
		cout<<B[i]<<" \t";

	cout<<"Enter "<<x<<" floating Values";
	for(int i=0; i<x; i++)
		cin>>D[i];
	cout<<endl<<endl;
	for(int i=0; i<x; i++)
		cout<<D[i]<<" \t";

	cout<<endl<<endl<<"Array D of floating value\n";;
	for(int i=0; i<x; i++)
		cout<<*(D+i)<<"\t"<<(D+i)<<endl;
	cout<<"Enter "<<x<<" double Values";
	for(int i=0; i<x; i++)
		cin>>E[i];
	cout<<endl<<endl<<"Array E of double value\n";;
	for(int i=0; i<x; i++)
		cout<<*(E+i)<<"\t"<<(E+i)<<endl;
	return 0;
}
