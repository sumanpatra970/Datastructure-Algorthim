//program to find max and min element and sum of elements in array.
#include<iostream>
using namespace std;
int main(){
	int n;
	int a[5]={1,5,3,9,0};
	n=5;
	int max=-1,min=1000;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(a[j]<max)
		{
			min=a[j];
		}
	}
	int sum=0;
	for(int k=0;k<n;k++)
	{
		sum=sum+a[k];
	}
	cout<<"Max element in the array is "<<max<<endl;
	cout<<"Min element in the array is "<<min<<endl;
	cout<<"Sum of the element in the array is "<<sum;
	return 0;
}
