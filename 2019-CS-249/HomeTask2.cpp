#include<iostream>

using namespace std;

int *srinkSize(int *p,int n){	//	shrinking array
	
	int *y = new int[n];	//dynamic array declaration
	
	for(int i=0;i<n;i++){
		y[i]=p[i];
	}
	
	delete p;	//deleting dynamic array
	
	return y;	
}

int main (){
	
	int n,temp[10];
	int *arr = new int[10];
	
	//assigning default value
	for (int i =0;i<10;i++){
		arr[i]=-999;
	}
	
	cout<<"Enter the number of input(Max Limit:10): ";
	cin>>n;
	
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	arr=srinkSize(arr,n);	//changing the pointing address
		
	cout<<"Array: ";	//printing address
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
	delete arr;
	
	return 0;
}


