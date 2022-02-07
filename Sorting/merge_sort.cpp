//program for merger-sort
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,5,6,7};
	int b[5]={2,4,10,11,12};
	int n=5;
	int i=0;
	int j=0;
	int c[10];
	int k=0;
	cout<<"array 1 : ";
	for(int w=0;w<5;w++)
	{
		cout<<a[w]<<" ";
	}
	cout<<endl;
	cout<<"array 2 : ";
	for(int v=0;v<5;v++)
	{
		cout<<b[v]<<" ";
	}
	cout<<endl;
	while(i<n && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(j!=n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	cout<<"sorted array : ";
	for(int l=0;l<k;l++)
	{
		cout<<c[l]<<" ";
	}
	return 0;
}
