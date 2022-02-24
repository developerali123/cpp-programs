#include<iostream>
using namespace std;
int main()
{
	int amount, account_number;
    cout<<"enter your account number:";
    cin>>account_number;
    cout<<"enter your amount:";
    cin>>amount;

    cout<<"choose from the following category  1,  2,  3:";
    int category;
    cin>>category;

    if (category==1)
    {
    cout<<"what is your name:";
    int name;
    cin>>name;
}

    else if(category==2)
    {
    cout<<"how old are you ?:";
    int age;
    cin>>age;
}

    else if(category==3)
    {
    cout<<"where do you stay ?:";
    int location;
    cin>> location;
}

    if(amount>=5000)
    {
    cout<<"thanks for doing business with us\n";
    }

    else if (amount<5000)
    cout<<"sorry you do not have sufficient funds\n";

	return 0;
}
