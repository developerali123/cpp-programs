#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};
Node *head,*cur,*temp;

void insert(){
	temp=new Node;
	cin>>temp->data;
	if(head==NULL){
		head=temp;
		cur=temp;
		temp->link=NULL;
	}else{
		cur->link=temp;
		cur=temp;
		temp->link=NULL;
	}
}

void head_add(){
	temp=new Node;
	cin>>temp->data;
	temp->link=head;
	head=temp;
}

void add(){
	temp=new Node;
	cin>>temp->data;
	int n;
	cin>>n;
	Node *temp2=head;
	Node *temp3=temp2->link;
	for(int i=0;i<n-2;i++){
		temp2=temp2->link;
		temp3=temp3->link;
	}
	temp->link=temp3->link;
	temp3->link=temp;
}

void head_del(){
	Node *temp2=head;
	head=temp2->link;
	delete temp2;
}

void del(){
	Node *temp2=head;
	Node *temp3=temp2->link;
	int n;
	cin>>n;
	for(int i=0;i<n-2;i++){
		temp2=temp2->link;
		temp3=temp3->link;
	}
	temp2->link=temp3->link;
	delete temp3;
}

void print(){
	Node *temp2=head;
	while(temp2->link!=NULL){
		cout<<temp2->data;
		temp2=temp2->link;
	}
	cout<<temp2->data;
	//if we want to print linked list in circular
//	temp2->link=head;
//	temp2=temp2->link;
//	cout<<temp2->data;
}

int main(){
	head=NULL;
	for(int i=0;i<10;i++){
		insert();
	}
//	head_add();
//	add();
//	head_del();
//	del();
	print();
}
