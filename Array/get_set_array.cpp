//program to get value and set value in an array
#include<iostream>
using namespace std;
int main(){
	int bit;
	int a[5]={1,4,5,6,2};
	int n=5;
	cout<<"elements in an array are ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"enter 1 for get and 0 for set";
	cin>>bit;
	int l,m,val;
	if(bit==1)
	{
		cout<<"enter index no";
		cin>>l;
		cout<<"Result of get function is "<<a[l];
	}
	if(!bit)
	{
		cout<<"enter index no";
		cin>>m;
		cout<<"enter value to set";
		cin>>val;
		a[m]=val;
		cout<<"set is done"<<endl;
		cout<<"elemts in an array are ";
		for(int j=0;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
	}
	return 0;
}
