#include<iostream>
using namespace std;
class Distance{
private:
	int feet;
	float inches;
public:
	Distance(int f=0,float i=0.0):feet(f),inches(i){}
	void setFeet(int);
	void setInches(float);
	int getFeet() const;
	float getInches() const;
	Distance addDistance(const Distance&) const;
};
void Distance::setFeet(int f)
{feet=f;}
void Distance::setInches(float i)
{inches=i;}
int Distance::getFeet() const
{return feet;}
float Distance::getInches() const
{return inches;}
Distance Distance::addDistance(const Distance &d2) const
{Distance temp;
 //feet=0; //ERROR: cannot modify this
 //d2.feet=0; //ERROR: cannot modify d2
 temp.inches=inches+d2.inches;
 if(temp.inches>=12.0)
	{temp.inches-=12.0;
	 temp.feet=1;}
 temp.feet+=feet+d2.feet;
 return temp;
}
int main()
{
Distance dist1(11,6.25), dist2(17,5.75), dist3;
dist3=dist1.addDistance(dist2);
cout<<dist3.getFeet()<<endl;
cout<<dist3.getInches()<<endl;
}

