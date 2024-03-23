#include<iostream>
using namespace std;

void sort(int a[],int size){
	int i,key,j;
	for(i=0;i<size;i++){
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
	}
}

void display(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
}
	
int main(){
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	while(size<=0){
		cout<<"Size cannot be less than or equal to 0. Enter a valid size: ";
	}
	int a[size];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<size;i++){
		cout<<"Element "<<"["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"The original array is: "<<endl;
	display(a,size);
	sort(a,size);
	cout<<"The array after being sorted is: "<<endl;
	display(a,size);
	return 0;
}

