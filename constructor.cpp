#include<iostream>
using namespace std;

class Counter
{
private:
	unsigned int count;
	unsigned int sum;
public:
	Counter():count(0),sum(0) {//Initializer list 
		//count=0;
	cout<<"constructor is called"<<endl;
	} //constructor
	~Counter(){//destructor
		cout<<"Destructor is called"<<endl;
	}
	void incCount();
	unsigned int getCount();
};
unsigned int Counter::getCount()
{
return count+sum;
}
void Counter::incCount()
{
count++;
sum++;
}
int main() {
Counter c; //creates an object and initializes count and sum
cout<<c.getCount()<<endl;
c.incCount();
cout<<c.getCount()<<endl;
Counter c1=c;//copy constructor
cout<<c1.getCount()<<endl;
c1.incCount();
cout<<c1.getCount()<<endl;
}

