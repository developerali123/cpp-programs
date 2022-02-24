#include<iostream>
using namespace std;
class Where
{
private:
	char charAray[10];//occupies 10 bytes
public:
	void reveal()
	{
		cout<<"My Object's Address is: "<<this<<endl;
	}
};
int main()
{
Where w1,w2,w3;
w1.reveal();
w2.reveal();
w3.reveal();
}

