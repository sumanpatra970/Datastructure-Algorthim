#include<iostream>
using namespace std;
int * change(int *a,int n){
	if(n==1)
	{
		return a;
	}
	int temp;
	temp=a[n-1];
	a=change(a,n-1);
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>temp)
		{
			int t;
			t=a[i];
			a[i]=temp;
			a[i+1]=t;
		}
	}
	return a;
}
int main(){
	int a[5]={2,8,9,6,5};
	int n=5;
	int *p;
	cout<<"array is : ";
	for(int b=0;b<n;b++)
	{
		cout<<a[b]<<" ";
	}
	cout<<endl;
	p=change(a,n);
	cout<<"sorted array is : ";
	for(int x=0;x<n;x++)
	{
		cout<<p[x]<<" ";
	}
	return 0;
}
