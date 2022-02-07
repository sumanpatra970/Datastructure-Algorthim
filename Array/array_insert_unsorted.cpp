//unsorted array with shifting
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,7};
	int index,val;
	cout<<"enter index no";
	cin>>index;
	cout<<"enter value";
	cin>>val;
	int n=5;
	for(int i=n-1;i>index;i--)
	{
		a[i]=a[i-1];
	}
	a[index]=val;
	cout<<"elements of an array are = ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
