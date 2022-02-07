//Program is to design a dynamic array
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of elements in an array ";
	cin>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter element at index "<<i<<" ";
		cin>>a[i];
	}
	cout<<"Elements in the array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
