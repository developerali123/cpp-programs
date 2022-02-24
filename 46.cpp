#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct mobile
{
	int modelno;
	char company[20];
	int price;
};

void input(mobile *m,int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"Enter model no: ";
		cin>>m[i].modelno;
		cin.ignore();
		cout<<"Enter company name: ";
		cin.getline(m[i].company,20);
		cout<<"Enter price: ";
		cin>>m[i].price;
		cout<<endl;
	}
}

void display(mobile *m,int size)
{
	cout<<setw(12)<<"Model no"<<setw(20)<<"Company Name"<<setw(10)<<"Price"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<setw(12)<<m[i].modelno<<setw(20)<<m[i].company<<setw(10)<<m[i].price<<endl;
	}
}

void comp(mobile *m,int size)
{
	string c;
	cout<<"enter company name";
	cin>>c;
	for(int i=0;i<size;i++)
	{
		if(m[i].company==c)
		cout<<"Model no: "<<m[i].modelno<<" of price: "<<m[i].price<<endl;
	}
}
void range(mobile *m,int size)
{
	int low,high;
	cout<<"enter low price";
	cin>>low;
	cout<<"enter high price";
	cin>>high;
	for(int i=0;i<size;i++)
	{
		if(m[i].price>=low&&m[i].price<=high)
		cout<<setw(12)<<m[i].modelno<<setw(20)<<m[i].company<<setw(10)<<m[i].price<<endl;
	}
}
void sort( mobile *M, int size)
{
	for(int i=0; i<size; i++)
		for(int j=i+1; j<size; j++)
			if(M[i].price>M[j].price)
			{
				mobile X=M[i];
				M[i]=M[j];
				M[j]=X;
				/*int p=M[i].price;
				M[i].price=M[j].price;
				M[j].price=p;*/ //this wrong way to interchange
			}
			cout<<endl<<" mobile sorted with price\n\n";
			display(M, size);
}

int main()
{
	mobile m[5];
	input(m,5);
	display(m,5);
	comp(m,5);
	range(m,5);
	sort(m, 5);
	return 0;
}
