#include<iostream>
using namespace std;
class Point {		// Declaration Point Class
	int x,y;		// Properties: x and y coordinates
 public:
	Point(int x_first=0,int y_first=0);
	void move(int, int);// A function to move points
	void print()const;// to prints coordinates on the screen
	bool is_zero();// is point on the zero point(0,0)
	Point* farAway(Point &);                            
	// Finds the point that has the largest distance from (0,0)
};
Point::Point(int x_first, int y_first){	
	x = x_first;
	y = y_first;
}
void Point::move(int new_x, int new_y){
	x = new_x;		   
    y = new_y;		
}
void Point::print() const
{cout << "X= " << x << ", Y= " << y << endl;}
bool Point::is_zero()
{return (x == 0) && (y == 0);}

Point* Point::farAway(Point &p) {	
	unsigned long x1 = x*x;				
	unsigned long y1 = y*y;
	unsigned long x2 = p.x * p.x;
	unsigned long y2 = p.y * p.y;
	if ( (x1+y1) > (x2+y2) ) 
		return this;
	else 
		return &p;
}
int main()
{
	Point p1,p2;	 // 2 objects: p1 and p2
	p1.move(100,50); // p1 to (100,50)
	p2.move(20,65);	 // p2 to (20,65)
	Point *pp;		// pp is a pointer to points
	pp=p1.farAway(p2);
	pp->print();			
	// the point that has the largest distance on the screen
}

