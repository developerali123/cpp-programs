#include<iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	void setFeet(int);
	void setInches(float);
	int getFeet();
	float getInches();
	void addDistance(Distance,Distance);
};

void Distance::setFeet(int f)
	{feet=f;}
void Distance::setInches( float i)
	{inches=i;}
int Distance::getFeet()
	{return feet;}
float Distance::getInches()
	{return inches;}
void Distance::addDistance (Distance d1, Distance d2)
{inches=d1.inches+d2.inches;
 feet=0;
 if(inches>=12.0)
	{inches-=12.0;
	 feet++;}
 feet+=d1.feet+d2.feet;
}


int main()
{
Distance dist1, dist2, dist3;
dist1.setFeet(11);
dist1.setInches(6.25);
dist2.setFeet(17);
dist2.setInches(5.75);
dist3.addDistance (dist1,dist2);
cout<<dist3.getFeet()
	<<endl;
cout<<dist3.getInches()
	<<endl;
}

