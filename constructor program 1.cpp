#include<iostream>
using namespace std;
class Box
	{
private:
	double length;
	double breadth;
	double height;
public:
	Box(double l=1.0,double b=1.0,double h=1.0);//default initializing values
	double volume();
};
Box::Box(double l,double b,double h) :length(l),breadth(b),height(h) { }

double Box::volume()
{
return length*breadth*height;
}
int main()
{
Box box1;
Box box2(4);
Box box3(5,5);
Box box4(5,2,3);
Box box5(box3);
Box box6=box4;
cout<<box1.volume() <<endl;
cout<<box2.volume() <<endl;
cout<<box3.volume() <<endl;
cout<<box4.volume() <<endl;
cout<<box5.volume() <<endl;
cout<<box6.volume() <<endl;
}
