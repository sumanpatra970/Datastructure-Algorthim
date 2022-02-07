//Program is about array creation and traversal of array using loop 
#include<iostream>
using namespace std;
int main(){
	cout<<"enter no of elements";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter element";
		cin>>a[i];
	}
	cout<<"elements of array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
	
}
