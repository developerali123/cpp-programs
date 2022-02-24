#include<iostream>
using namespace std;

int queue[5];
int f=0;
int r=0;
int top=-1;

void push(){
	if(f==1&&r-top==1){
		cout<<"queue is full\n";
	}else{
		top++;
		cin>>queue[top];
		if(top==4){
			top=-1;
			f=1;
		}
	}
}

void pop(){
	if(f==0&&r>top){
		cout<<"queue is empty\n";
	}else{
		cout<<queue[r]<<" "<<endl;
		r++;
		if(r==5){
			r=0;
			f=0;
		}
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
		}else{
			cout<<"please enter correct number";
			goto ab;
		}
	}while(n==1||n==2||n==3);
}
