#include <iostream>
using namespace std;

void input(int X[], int s)
{
	cout<<"Enter values\n";
	for(int i=0; i<s; i++)
		cin>>X[i];
}
void show(int X[], int s)
{
	for(int i=0; i<s; i++)
		cout<<X[i]<<"    ";
	cout<<endl<<endl;
}
void sort(int X[], int s)
{
	for(int i=0; i<s; i++)
		for(int j=i+1; j<s; j++)
			if (X[i]>X[j])
			{
				int temp=X[i];
				X[i]=X[j];
				X[j]=temp;
			}
}
void input(char *c)
{
	cout<<"enter string";
	cin.getline(c, 100);

}
void show(char X[])
{
	cout<<X;

	cout<<endl<<endl;
}

int main()
{
	int A[5],  B[10];
	char C[100];
	input(C);
	input(A, 5);
	input(B, 10);
	show(B, 10);
	show(A, 5);
	show(C);
    sort(A, 5);
	sort (B, 10);
	cout<<"After sorting\n\n";
	show(A, 5);
	show(B, 10);


	return 0;
}
