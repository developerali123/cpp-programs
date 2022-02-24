#include<iostream>
using namespace std;

int top=-1;

struct Node{
	int data;
	Node *link;
};
Node *head,*cur,*temp;

void push(){
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
	top++;
}

void pop(){
	if(top>-1){
	Node *temp2=head;
	head=temp2->link;
	cout<<temp2->data;
	delete temp2;
	}else{
		cout<<"queue is empty";
	}
}

int main(){
	head==NULL;
	int n;
	do{
		ab:
		cout<<"1.add\n";
		cout<<"2.del\n";
		cin>>n;
		if(n==1){
			push();
		}else if(n==2){
			pop();
		}else{
			cout<<"please enter coorect option";
			goto ab;
		}
	}while(n==1||n==2);
	
}
