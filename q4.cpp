#include <iostream>
#include <string>
using namespace std;
template<typename A, typename B>
A shape(A base, A height, B name)
{
	float area=0;
		if( name=="triangle")
		{
			area=(0.5)*height*base;
			cout<<"Base: "<<base<<"cm"<<endl;
			cout<<"Height: "<<height<<"cm"<<endl;
		}
		if (name=="parallelogram")
		{
			area=base*height;
			cout<<"Base: "<<base<<"cm"<<endl;
			cout<<"Height: "<<height<<"cm"<<endl;
		}
		return area;
}
template<typename C>
C show_master(C index, C arr[9])
{
	int j=100;
	for(int i=0;i<10;i++)
	{
		arr[i]=j;
		j++;
	}
	return arr[index];
}
int main()
{
	float base=0,height=0,area=0;string name;
	cout<<"\n\nAs base and height parameters are only in triangle and parallelogram shapes\n";
	cout<<"Enter name of your desired shape in small alphabets\n\n";
	cout<<"Name: "; 
	cin>>name;
	cout<<endl;
	cout<<"Enter Base(centimenters): "; 
	cin>>base;
	cout<<endl;
	cout<<"Enter Height(centimenters): "; 
	cin>>height;
	cout<<endl;
	area=shape(base,height,name);
	cout<<"Area of "<<name<<" = "<<area<<"cm\n";
	int index, array[9], final;
	cout<<"\t\tSECOND PART OF PROGRAM\n";
	cout<<"Enter the index number : ";
	cin>>index;
	final=show_master(index , array);
	cout<<"The value at index "<<index<<" is "<<final<<endl;
	return 0;
}
