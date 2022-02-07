//program to find missing elements in sorted array
#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,3,4,5,6,7,9,11,12};
	int n=10;
	int k=0;
	int c[10];
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]+1==a[i+1])
		{
			count++;
		}
		else
		{
			c[k]=a[i]+1;
			k++;
		}
	}
	cout<<"missing elements in an sorted array = ";
	for(int l=0;l<k;l++)
	{
		cout<<c[l]<<" ";
	}
	return 0;
}
