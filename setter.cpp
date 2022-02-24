#include<iostream>
using namespace std;
class Counter
{
private:
	unsigned int count;
public:
	void incCount();
	unsigned int getCount();
	void setCount(unsigned int); //setter to initialize count
};

unsigned int Counter::getCount() {
return count;
}
void Counter::incCount() {
	count++;
}
void Counter::setCount(unsigned int c) {
	count=c;
} //initializing count

int main() {
Counter c; //creates an object
c.setCount(0); //initializes count to zero
cout<<c.getCount()<<endl;
c.incCount();
cout<<c.getCount()<<endl;
}

