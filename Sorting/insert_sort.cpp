//program for insert-sort
#include<iostream>
using namespace std;
int main(){
	int a[5]={10,20,4,30,5};
	int n=5;
	cout<<"array : ";
	for(int w=0;w<n;w++)
	{
		cout<<a[w]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++)
	{
		int j=i;
		while(j>0)
		{
			if(a[j]<a[j-1])
			{
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
			j--;
		}
	}
	cout<<"sorted array : ";
	for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
	return 0;
}
