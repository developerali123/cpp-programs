#include<iostream>
using namespace std;
class Covid{
	int code;
	char ch;
	int days_past;
	string vaccine_name;
	int n;
	public:
		class Range //exception class for Covid
		{};
		class Test//another exception class for Covid
		{};
		void seconddose(){
			cout<<"is this your second dose(y/n):	";
			cin>>ch;
			cout<<endl;
			if(ch=='y'||ch=='Y'){
				cout<<"how many days past,after taking your first dose:	";
				cin>>days_past;
				cout<<endl;
				cin.ignore();
				cout<<"enter vaccine name:	";
				getline(cin,vaccine_name);
				cout<<endl;
				if(vaccine_name=="Pfizer"){
					n=2;
					cout<<"enter your 4 digit code:	";
					cin>>code;
					cout<<endl;
					if(days_past<=21){
					throw Range();//throw exception
					}
				}
				if(vaccine_name=="AstraZeneca"){
					n=1;
					cout<<"enter your 4 digit code:	";
					cin>>code;
					cout<<endl;
					if(n<2){
						throw Test();
					}
				}
				if(vaccine_name=="CinoVac"&&days_past<=28){
					n=2;
					throw Range();
					cout<<endl;
				}
			}
			else{
					cout<<"		you can get your vaccine today";
				}
		}
};
int main(){
	try{
	Covid obj;
	obj.seconddose();
	}
	catch(Covid::Range){
		cout<<"		you are not eligible to get vaccine today due to less no of days gap reason";
	}
	catch(Covid::Test){
		cout<<"		you are not eligible to get vaccine becaiuse this vaccine has only one dose";
	}
}
