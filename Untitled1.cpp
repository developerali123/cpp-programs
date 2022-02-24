#include<iostream>
using namespace std;
class Rectangle{
	int length,width;
	public:
		Rectangle(int l,int w){
			length=l;
			width=w;
		}
		void show(){
			cout<<length,	width;
		}
};
int main()
{
      Rectangle rect1(3.4, 5.68);
      Rectangle rect2(2.4, 4.68);
      if (rect1-- != ++rect2) //increment/decrement will add & subtract by 1 of each data members of class
	cout << "\n Both are not of same size";
      else
	cout << "\n Both are of same size";
      rect1.show(); //will display values 2.4, 4.68      
      Rectangle rect3 = rect1 + rect2;
      rect3.show(); //will display values 5.8, 10.36
      system("pause");
      return 0;
}

