#include<iostream>
using namespace std;
int main()
{
	char A[1000];
	cout<<"\tenter a paragraph\t"<<endl<<endl;;
	cin.getline(A,1000);
	int i=0,sentence=0;
	char ch;
	cout<<"enter word";
	cin>>ch;
	while(A[i]!=0)
	{
		if(A[i]==' '||A[i]==ch)
		sentence++;
		i++;
	}
	cout<<"\n\nnumber of sentences in this paragraph is:\t"<<sentence<<endl;
	return 0;
}
