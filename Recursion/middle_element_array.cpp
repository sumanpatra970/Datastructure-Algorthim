//program to find mid element in array using recursion
#include<iostream>
using namespace std;
int change(int *a,int n,int size){
	if(n==size/2)
	{
		if(size/2%2!=0)
		{
			cout<<a[n-1]<<" "<<a[n];
			return 1;
		}
		else
		{
			cout<<a[n];
			return 1;
		}
	}
	int b;
	b=change(a,n-1,size);
	return b;
}
int main(){
	int a[6]={2,8,3,6,5};
	int n=6;
	cout<<"mid element is ";
	change(a,n,n);
	return 0;
}
