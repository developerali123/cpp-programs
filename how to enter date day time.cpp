#include<iostream>
#include<ctime>
using namespace std;
int main(){
	//declaring argument for time()
	time_t tt;
	//declaring variable to store return value of localtime
	struct tm*ti;
	//applying time()
	time(&tt);
	//using localtime()
	ti=localtime(&tt);
	cout<<"current day,date and time is:"<<asctime(ti);
	return 0;
}
