//program to reverse an array using recursion
#include<iostream>
using namespace std;
int* change(int *a,int n,int size){
	if(n==size/2+1)
	{
		return a;
	}
	int temp;
	temp=a[n-1];
	a=change(a,n-1,size);
	int t=a[(size)-n];
	a[(size-n)]=temp;
	a[n-1]=t;
	return a;
}
int main(){
	int a[5]={2,8,9,6,5};
	int n=5;
	cout<<"array : ";
	for(int x=0;x<5;x++)
	{
		cout<<a[x]<<" ";
	}
	cout<<endl;
	change(a,n,n);
	cout<<"reversed array : ";
	for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
	return 0;
}
