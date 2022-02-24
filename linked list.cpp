#include<iostream>
using namespace std;
struct Node
{
int data;
Node *link;
	
};
Node *temp,*head,*cur;

void insert()
{
	int x;
	cout<<"Enter value of x\n";
	cin>>x;
	temp=new Node;
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		cur=temp;
		temp->link=NULL;
	}
	else
	{
	
	cur->link=temp;
	cur=temp;
	temp->link=NULL;
}
}
void print()
{
	Node *temp2=head;
	while(temp2!=NULL)
	{
		cout<<temp2->data;
		temp2=temp2->link;
	}
}

int main()
{
head=NULL;
for(int i=1;i<=4;i++)
{
	insert();
	}	
	print();
	
	return 0;
}
