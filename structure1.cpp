#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct menuItem{
	string name;
	float price;
	float total;
	int qty;
	int no;
};
void showMenu()
{
  cout<<endl<<endl<<endl;
  cout<<"\t****************  WELLCOME TO MUHAMMAD ALI MIRZA RESTURARENT  ******************\t"<<endl;
  cout<<"\t\t\t  -----------------------------------------";
  cout<<endl<<endl<<endl;
  cout<<"\tThis is our menu list"<<endl<<endl;;
  cout<<"    1  Plain Egg                    $1.45"<<endl;
  cout<<"    2  Bacon and Egg 		    $2.45"<<endl;
  cout<<"    3  Muffin 		 	    $0.99"<<endl;
  cout<<"    4  French Toast 		    $1.99"<<endl;
  cout<<"    5  Fruit Basket 		    $2.49"<<endl;
  cout<<"    6  Cereal 		    	    $0.69"<<endl;
  cout<<"    7  Coffee 	        	    $0.50"<<endl;
  cout<<"    8  Tea 		            $0.75"<<endl;
  cout<<endl<<endl;
}

void getData(menuItem *p, int m)
{
	if(m>0&&m<=8)
	{
		for(int i=0;i<m;i++)
		{
			cout<<"\tEnter the number of the item you want to eat in breakfast\t ";
			cin>>p[i].no;
			cout<<endl;
			cout <<"\tEnter amount of items\t ";
			cin>>p[i].qty;
			cout<<endl;
			if(p[i].no==1)
			{
				p[i].name="Plain Egg";
				p[i].price=1.45;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==2)
			{
				p[i].name="Beacon and Egg";
				p[i].price=2.45;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==3)
			{
				p[i].name="Muffin";
				p[i].price=0.99;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==4)
			{
				p[i].name="French Toast";
				p[i].price=1.99;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==5)
			{
				p[i].name="fruit basket";
				p[i].price=2.49;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==6)
			{
				p[i].name="Cereal";
				p[i].price=0.69;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==7)
			{
				p[i].name="Coffee";
				p[i].price=0.50;
				p[i].total=p[i].price*p[i].qty;
			}
			else if(p[i].no==8)
			{
				p[i].name="Tea";
				p[i].price=0.75;
				p[i].total=p[i].price*p[i].qty;
			}
		}
	}
}
void printCheck(menuItem *p ,int m)
{
	cout.setf(ios:: fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	float Total=0;
	float tax=0;
	cout<<endl<<endl<<endl;
	cout<<"\t*************  Sir your order details are as under  *****************\t"<<endl;
	cout<<endl<<endl<<endl;
	cout<<setw(20)<<"quantity"<<setw(20)<<"Name"<<setw(20)<<"Price($)"<<setw(20)<<"total($)"<<endl<<endl;
	for (int i=0;i<m;i++)
	{
		
		cout<<setw(18)<<p[i].qty<<setw(22)<<p[i].name<<setw(15)<<"$"<<p[i].price<<setw(15)<<"$"<<p[i].total<<endl;
		Total=Total+p[i].total;
			
	}
		tax=tax+(Total/100)*5;
		cout<<endl;
		cout<<"\tTax is $"<<tax<<endl<<endl;
		cout<<"\tAmount due is $"<<Total+tax<<endl<<endl;
}

int main()
{
	showMenu();
	int m;
	cout<<"\tHow many kind of items you want to order  (1-8)\t";
	cin>>m;
	cout<<endl;
	while(m<1||m>8)
	{
		cout<<"\tPlease Enter number from 1 to 8"<<endl;
	}
	menuItem *p=new menuItem[m];
	getData(p,m);
	printCheck(p,m);
	system("pause");
	return 0;
}
