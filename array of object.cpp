#include<iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(int f=0,float i=0.0):feet(f),inches(i){}
	void setFeet(int);
	void setInches(float);
	int getFeet();
	float getInches();
};

void Distance::setFeet(int f)
	{feet=f;}
void Distance::setInches(float i)
	{inches=i;}
int Distance::getFeet()
	{return feet;}
float Distance::getInches()
	{return inches;}

int main(){
Distance dist[10];
int ft,i,sum=0;
float in;
for(i=0;i<10;i++){
	cout<<"enter distance"<<endl;
	cin>>ft;
	dist[i].setFeet(ft);
	cin>>in;
	dist[i].setInches(in);
	sum=sum+ft+in;
	}
cout<<sum;
}
