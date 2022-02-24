#include<iostream>
using namespace std;
class Point
{ 	
	int x,y; 	// Properties: x and y coordinates
public:
   Point(int, int);// Declaration of the constructor
   void move(int, int);// A function to move points
   void print() const;// constant function: prints 				//coordinates on the screen
};
Point::Point(int x_first, int y_first){	
	x = x_first;
	y = y_first;
}
void Point::move(int new_x, int new_y){
	x = new_x;		   
    y = new_y;		
}
void Point::print() const{
cout << "X= " << x << ", Y= " << y << endl;
}
int main(){
	const Point cp(10,20); // constant point
	Point ncp(0,50); // non-constant point
	cp.print();  // OK. Const function 
			//operates on const object
	//cp.move(30,15);  ERROR! Non-const 
				//function on const object
	ncp.move(100,45);// OK. ncp is non-const
	ncp.print();
}

