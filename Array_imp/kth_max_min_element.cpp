//program for bubble-sort
#include<iostream>
using namespace std;
int main (){
	int a[6]={10,40,30,20,5,6};
	int n=6;
	cout<<"Array : ";
	for(int w=0;w<n;w++)
	{
		cout<<a[w]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int k=2;
	cout<<"k th max element "<<a[n-k]<<endl;
	cout<<"k th min element "<<a[k-1];
	return 0;
}
