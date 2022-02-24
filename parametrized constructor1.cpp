#include<iostream>
#include<cmath>
using namespace std;

class Distance{
    int x, y;
    public:
    	friend double point(Distance , Distance);
        Distance(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
double point(Distance p1,Distance p2){
	double dist=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	cout<<"distance between points is :"<<dist;
} 

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
int main(){
    Distance p(1, 1);
    p.displayPoint();

    Distance q(1,1);
    q.displayPoint();
    point(p,q);
    return 0;
}
