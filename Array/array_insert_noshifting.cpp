//program to insert in unsorted array
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,7};
	int index,val;
	cout<<"enter index no ";
	cin>>index;
	cout<<"enter value ";
	cin>>val;
	int n=5;
	int temp;
	temp=a[index];
	a[index]=val;
	a[n-1]=temp;
	cout<<"after insertion, ";
	cout<<"elements of an array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}

