//program to find missing elements in an unsorted array
#include<iostream>
using namespace std;
int main(){
	int a[5]={9,7,4,10,3};
	int max=-1;
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max;
	int c[10];
	for(int l=0;l<max;l++)
	{
		c[l]=0;
	}
	for(int j=0;j<max;j++)
	{
		c[a[j]]++;
	}
	cout<<"missing elements are in unsorted array = ";
	for(int k=0;k<max;k++)
	{
		if(c[k]==0)
		{
			cout<<k<<" ";
		}
	}
	return 0;
}
