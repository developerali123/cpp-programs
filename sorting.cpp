#include<iostream>
using namespace std;
void selection_sort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[j]<A[i]){
				int temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
		}
	}
}

void bubble_sort(int A[],int n){
	int count=0;
	while(count<n-1){
		for(int i=0;i<n-count-1;i++){
			if(A[i]>A[i+1]){
				int temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		count++;
	}
}

void insertion_sort(int A[],int n){
	for(int i=1;i<n;i++){
		int cur=A[i];
		int j=i-1;
		while(A[j]>cur&&j>=0){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=cur;
	}
}

void merge(int A[],int l,int mid,int e){
	int i=l;
	int j=mid+l;
	int k=l;
	int temp[5];
	while(i<=mid&&j<=e){
		if(A[i]<=A[j]){
			temp[k]=A[i];
			i++;
			k++;
		}
		else{
			temp[k]=A[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
		temp[k]=A[i];
			i++;
			k++;
	}
	while(j<=e){
		temp[k]=A[j];
			j++;
			k++;
	}
	for(int i=l;i<e;i++){
		A[i]=temp[i];
	}
//	int n1=mid-l+1;
//	int n2=e-mid;
//	int B[n1],C[n2];
//	for(int i=0;i<n1;i++){
//		B[i]=A[l+i];
//	}
//	for(int j=0;j<n2;j++){
//		C[j]=A[mid+1+j];
//	}
//	int i=0,j=0,k=l;
//	while(i<n1&&j<n2){
//		if(B[i]<=C[j]){
//			A[k]=B[i];
////			k++;
//			i++;
//		}
//		else{
//			A[k]=C[j];
////			k++;
//			j++;
//		}
//		k++;
//	}
//	while(i<n1){
//		A[k]=B[i];
//		k++;
//		i++;
//	}
//	while(j<n2){
//		A[k]=C[j];
//		k++;
//		j++;
//	}
}

void merge_sort(int A[],int l,int e){
	if(l<e){
		int mid=l+(e-l)/2;
		merge_sort(A,l,mid);
		merge_sort(A,mid+1,e);
		merge(A,l,mid,e);
	}
}

void print(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}

void linear_search(int A[],int n){
	int number;
	cout<<"enter number to search in array";
	cin>>number;
	bool p=true;
	for(int i=0;i<n;i++){
		if(A[i]==number){
			cout<<i;
			p=false;
		}
	}
	if(p==true){
		cout<<"number not founded";
	}
}

void binary_search(int A[],int n){
	int number;
	cout<<"enter number to search in array";
	cin>>number;
	int start=0;
	int end=n;
	while(start<=end){
		int mid=(start+end)/2;
		if(A[mid]==number){
			cout<<mid;
			break;
		}
		else if(A[mid]>number){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
}

int main(){
//	int n;
//	cout<<"Enter array size";
//	cin>>n;
//	int A[n];
//	for(int i=0;i<n;i++){
//		cout<<"enter "<<i+1<<" number :";
//		cin>>A[i];
//	}
	int B[5];
	for(int i=0;i<5;i++){
		cout<<"enter "<<i+1<<" number :";
		cin>>B[i];
	}
//	selection_sort(A,n);
//	bubble_sort(A,n);
//	insertion_sort(A,n);
	merge_sort(B,0,4);
	for(int i=0;i<5;i++){
		cout<<B[i]<<" ";
	}
//	print(A,n);
//	linear_search(A,n);
//	binary_search(A,n);
	return 0;
}
