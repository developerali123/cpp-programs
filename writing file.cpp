#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string ali="hi muhammad ali mirza";
	ofstream out("ali50.txt");
	out<<ali;
	return 0;
}
