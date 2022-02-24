#include<iostream>
#include<string>
using namespace std;

struct Patient{
	int id;
	string name;
	Patient *link;
};

Patient *temp,*head,*cur;
int top=-1;

void push(){
	temp=new Patient;
	cin>>temp->id;
	cin.ignore();
	getline(cin,temp->name);
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
	Patient *temp2=head;
	head=temp2->link;
	cout<<temp2->id<<" "<<endl;
	cout<<temp2->name<<" "<<endl;
	delete temp2;
	top--;
	}else{
		cout<<"there is no data";
	}
}

void display(){
	if(top>-1){
	Patient *temp2=head;
	while(temp2!=NULL){
		cout<<temp2->id<<endl;
		cout<<temp2->name<<endl;
		temp2=temp2->link;
	}
	}else{
		cout<<"there is no data";
	}
}

int main(){
	head==NULL;
	int n;
	do{
		ab:
		cout<<"1.add\n";
		cout<<"2.del\n";
		cout<<"3.display\n";
		cin>>n;
		if(n==1){
			push();
		}else if(n==2){
			pop();
		}else if(n==3){
			display();
		}else{
			cout<<"please enter correct option:";
			goto ab;
		}
	}while(n==1||n==2||n==3);
}
