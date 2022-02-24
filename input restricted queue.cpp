#include<iostream>
using namespace std;

int queue[5];
int top=-1;

void push(){
	if(top<4){
		for(int i=top;i>=0;i--){
			queue[i+1]=queue[i];
		}
		top++;
		cin>>queue[top];
	}else{
		cout<<"queue is full\n";
	}
}

void pop(){
	if(top<0){
		cout<<"queue is empty\n";
	}else{
		cout<<queue[top]<<" "<<endl;
		top--;
	}
}

void display(){
	if(top>-1){
		for(int i=0;i<top;i++){
			cout<<queue[top]<<" ";
		}
	}else{
		cout<<"stack is empty\n";
	}
}

int main(){
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
			cout<<"please enter correct number";
			goto ab;
		}
	}while(n==1||n==2||n==3);
}
