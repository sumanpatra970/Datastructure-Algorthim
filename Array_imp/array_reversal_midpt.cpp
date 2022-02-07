//program to reverse an array //o(logn)
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of element";
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter element";
		cin>>a[i];
	}
	cout<<"Before reversal elements are";
	for(int ii=0;ii<n;ii++)
	{
		cout<<a[ii]<<" ";
	}
	cout<<endl;
	int mid=n/2;
	int temp;
	for(int j=0;j<mid;j++)
	{
		temp=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=temp;
	}
	cout<<"After reversal elements are";
	for(int ij=0;ij<n;ij++)
	{
		cout<<a[ij]<<" ";
	}
	return 0;
}
