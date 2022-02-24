#include<iostream>
using namespace std;
struct node{
	int data;
	node *prev;
	node *next;
};
node *temp,*head,*cur;

void insert(){
	temp=new node;
	cout<<"enter values";
	cin>>temp->data;
	temp->next=NULL;
		if(head==NULL){
			temp->prev=NULL;
			head=temp;
			cur=temp;
		}
		else{
			cur->next=temp;
			temp->prev=cur;
			cur=temp;
		}
}
void head_insert(){
	temp=new node;
	cout<<"enter values";
	cin>>temp->data;
	node *temp2=head;
	temp2->prev=temp;
	temp->next=temp2;
	temp->prev=NULL;
	head=temp;
}
void second_insert(){
	temp=new node;
	cout<<"enter values";
	cin>>temp->data;
	node *temp2=head;
	node *temp3=head->next;
	temp3->prev=temp;
	temp->next=temp3;
	temp->prev=temp2;
	temp2->next=temp;
}
void third_insert(){
	temp=new node;
	cout<<"enter values";
	cin>>temp->data;
	node *temp2=head->next;
	node *temp3=temp2->next;
	temp3->prev=temp;
	temp->next=temp3;
	temp->prev=temp2;
	temp2->next=temp;
}
void print(){
	node *temp2=head;
	while(temp2!=NULL){
		cout<<temp2->data;
		temp2=temp2->next;
	}
}

int main(){
	head=NULL;
	for(int i=0;i<4;i++){
		insert();
	}
	head_insert();
	second_insert();
	third_insert();
	print();
}
