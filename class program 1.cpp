#include<iostream>
using namespace std;
class ASimpleClass //creates class
{
	private: 
		int data; //data member
		public:
			void setData(int item) //member function
			{
				data=item;
			}
			void displayData() //member function
			{
				cout<<"Data is:"<<data<<endl;
			}
};
int main()
{
ASimpleClass asp; //creates object
asp.setData(10); //member are accessed using dot operator
asp.displayData();
asp.setData(20);
asp.displayData();
return 0;	
}
