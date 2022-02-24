#include<iostream>
using namespace std;
class Box{
private:
	double length;
	double breadth;
	double height;
public:
	Box(double l=1.0,double b=1.0,double h=1.0);
	double volume();
	int	compareVolume(Box);
};
Box::Box(double l,double b,double h) : length(l),breadth(b),height(h)
{ }

double Box::volume()
{
return length*breadth*height;
}
int Box::compareVolume(Box otherbox)
{
double vol1=this->volume();
		//same as double vol1=volume();
		//accessing member function using this
double vol2=otherbox.volume();
if(vol1>vol2) 
	return 1;
else if(vol1<vol2) 
	return -1;
else 
	return 0;
}
int main()
{
Box firstbox(17.0,11.0,5.0);
Box secondbox(9.0,18.0,4.0);
cout<<firstbox.compareVolume(secondbox)<<endl;
cout<<firstbox.volume()<<endl;
cout<<secondbox.volume()<<endl;
}

