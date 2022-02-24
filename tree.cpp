#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
};
Node *root,*temp,*cur,*parent;

void insert(){
	temp=new Node;
	cin>>temp->data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL){
		root=temp;
	}else{
		cur=root;
		parent=NULL;
		while(1){
			if(temp->data<parent->data){
			cur=cur->left;
			if(cur==NULL){
				parent->left=temp;
				return;
			}
		}else{
			cur=cur->right;
			if(cur==NULL){
				parent->right=temp;
				return;
			}
		}
		}
	}
}

//void display(){
//	Node *temp2=root;
//	cout<<temp2->data;
//	temp2=temp2->left;
//	cout<<temp2->data;
//		temp2=temp2->right;
//	cout<<temp2->data;
//}

int main(){
	root=NULL;
	for(int i=1;i<=3;i++){
		insert();
	}
//	display();
}
