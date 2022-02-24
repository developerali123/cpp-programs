// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
struct node {
    int data;
    node *link;
};
node *temp, *head, *cur;
void insert() {
    temp = new node;
    cout << "enter number ";
    cin >> temp->data;
    if (head == NULL) {
        head = temp;
        cur = temp;
        temp->link = NULL;
    }
    else {
        cur->link = temp;
        cur = temp;
        temp->link = NULL;
    }
}

void print()
{
	node *temp2=head;
	while(temp2->link!=NULL)
	{
		cout<<temp2->data<<" ";
		temp2=temp2->link;
	}
	cout<<temp2->data;
}

void insert_head()
{
	int x;
	cout<<"Enter value: ";
	cin>>x;
	temp=new node;
	temp->data=x;
	temp->link=head;
	head=temp;
	                                                                                
}

int main()
{
    head = NULL;
    for (int i = 0; i < 4; i++) {
        insert();
    }
    insert_head();
    print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

