#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head,*temp,*cur;
void insert()
{
	int x;
	cout<<"Enter value: ";
	cin>>x;
	temp=new node;
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		cur=temp;
		temp->link=NULL;
	}
	else{
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


///////////////      Reversing sigular link list     ////////////////

void reverse_link()
{
	node *prev,*current,*next;
	prev = NULL;
	current=next=head;
	while(next!=NULL)
	{
		next=next->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}

int main()
{
	head = NULL;
	for(int i=1;i<5;i++)
	{
		insert();
	}
	print();
	cout<<endl;
	reverse_link();
	print();
	return 0;
}	
