#include<iostream>
using namespace std;

struct node{
	int data;
	node *link;
};
node *temp,*head,*cur;

void insert()
{
	int x;
	cout<<"enter value: ";
	cin>>x;
	temp=new node;
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
	node *temp2=head;
	while(temp2->link!=NULL)
	{
		cout<<temp2->data<<" ";
		temp2=temp2->link;
	}
	cout<<temp2->data;
}

//insert a new node at head position

void insert_head()
{
	temp=new node;
	cout<<"Enter value that is to be added at first: ";
	cin>>temp->data;
	temp->link=head;
	head=temp;
	                                                                                
}


//insert a new node at end of the link list

void insert_tail()
{
	temp=new node;
	cout<<"\nEnter value that is to be added at last: ";
	cin>>temp->data;
	node *temp2=head;
	while(temp2->link!=NULL)
	{
		temp2=temp2->link;
	}
	if(temp2->link==NULL)
	{
		temp2->link=temp;
		temp->link=NULL;
	}
}

////////////////  inserting node after just head

 void insert_second_node()
 {
 	temp=new node;
	cout<<"\nEnter value that is to be added at second position: ";
 	cin>>temp->data;
 	temp->link=head->link;
 	head->link=temp;
 }

// inserting node after second position

 void insert_third_position()
 {
 	int x;
 	cout<<endl;
 	cout<<"Enter value that is to be added at third position: ";
 	cin>>x;
 	temp=new node;
 	temp->data=x;
 	node *temp2=head->link;
 	temp->link=temp2->link;
 	temp2->link=temp;
 }

////////////////  inserting node at any position given by user   ///////////

void insert_node_at_any_position()
{
	int position;
	cout<<"Enter the number of position: ";
	cin>>position;
	int x;
	cout<<"Enter value that is to be added: ";
	cin>>x;
	temp=new node;
	temp->data=x;
	node *temp2=head;
	for(int i=1;i<=position-1;i++)
	{
		temp2=temp2->link;
	}
	temp->link=temp2->link;
	temp2->link=temp;
	
}

//deleting head node of singly list

void head_del()
{
	node *temp2=head;
	head=temp2->link;
	delete temp2;
}

//deleting 2nd node of link list

void del_sec_node()
{
	node *temp2=head;
	temp2=temp2->link;
	head->link=temp2->link;
	delete temp2;
}

void del_third_node()
{
	node *temp2=head;
	node *temp3;
	for(int i=1;i<3;i++)
	{
		temp3=temp2;
		temp2=temp2->link;
	}
	temp3->link=temp2->link;
	delete temp2;
	
}

////////////////////// Deleting forth node        /////////////////////

void del_forth_node()
{
	node *temp2=head;
	node *temp3;
	for(int i=1;i<4;i++)
	{
		temp3=temp2;
		temp2=temp3->link;
	}
	temp3->link=temp2->link;
	delete temp2;
}

////////////////     delting node at any position  ///////////

void del_any_position()
{
	int index;
	cout<<"\nEnter number of node you want to delete: ";
	cin>>index;
	node *temp2=head;
	node *temp3;
	for(int i=1;i<index;i++)
	{
		temp3=temp2;
		temp2=temp2->link;
	}
	temp3->link=temp2->link;
	delete temp2;
}

//Deleting last node of link list

void del_end_node()
{
	node *temp2,*prev;
	temp2=head;
	while(temp2->link!=NULL)
	{
		prev=temp2;
		temp2=temp2->link;
	}
	prev->link=NULL;
	delete temp2;
}


int main()
{
	head=NULL;
	for(int i=1;i<=6;i++)
	{
		insert();
	}
//	insert_head();
//	insert_second_node();
//	insert_third_position();
//	insert_tail();
	del_end_node();
	print();
}
