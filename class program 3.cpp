#include<iostream>
using namespace std;
class TimeType
{
	private:
		int hrs,mins,secs;
		public:
			void Set(int hours,int minutes,int seconds);
			void increment();
			void write();
			bool Equal(TimeType otherTime);
			bool LessThan(TimeType otherTime);
};
void TimeType::Set(int hours,int minutes,int seconds)
{
	hrs=hours;
	mins=minutes;
	secs=seconds;
}
void TimeType::write()
{
cout<<hrs<<mins<<secs;
}
int main()
{
	TimeType appointment;
	appointment.Set(15,30,0);
	appointment.write();
	return 0;
}
