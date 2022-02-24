#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
};
Node *root,*temp,*cur;

void insert(){
	temp=new Node;
	cin>>temp->data;
	if(root==NULL){
		root=temp;
		cur=temp;
		temp->left=NULL;
		temp->right=NULL;
	}
}

void display(){
	Node *temp2=root;
	cout<<temp2->data;
}

int main(){
	root=NULL;
	insert();
	display();
}
