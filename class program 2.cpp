#include<iostream>
using namespace std;
class Part
{
	int modelno;
	int partno;
	float cost;
	public:
		void setPart(int mn,int pn,float c)
		{
			modelno=mn;
			partno=pn;
			cost=c;
		}
		void showPart()
		{
			cout<<"Model number:"<<modelno<<endl;
			cout<<"part number:"<<partno<<endl;
			cout<<"price:"<<cost<<endl;
		}
};
int main()
{
Part part;
part.setPart(555,100,100);
part.showPart();
return 0;	
}
