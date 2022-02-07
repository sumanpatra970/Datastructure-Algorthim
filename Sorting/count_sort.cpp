//program for count-sort
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,6,8,3,2};
	int max=-1;
	int n=5;
	cout<<"Array : ";
	for(int w=0;w<n;w++)
	{
		cout<<a[w]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	max=max+1;
	int c[max];
	for(int k=0;k<max;k++)
	{
		c[k]=0;
	}
	for(int j=0;j<n;j++)
	{
		c[a[j]]++;
	}
	cout<<"Sorted Array : ";
	for(int l=0;l<max;l++)
	{
		if(c[l]>0)
		{
			cout<<l<<" ";
		}
	}	
	return 0;
}
