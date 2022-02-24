#include<iostream>
using namespace std;

int stack[5];
int top=-1;

void push(){
	if(top<4){
		top++;
		cin>>stack[top];
	}else{
		cout<<"stack is full\n";
	}
}

void pop(){
	if(top>-1){
		cout<<stack[top]<<" "<<endl;
		top--;
	}else{
		cout<<"stack is empty\n";
	}
}

void display(){
	if(top>-1){
		for(int i=0;i<top;i++){
			cout<<stack[top]<<" ";
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
			cout<<"please enter correct option:";
			goto ab;
		}
	}while(n==1||n==2||n==3);
}
