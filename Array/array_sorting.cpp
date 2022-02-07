//program to check whether array is sorted or not
#include<iostream>
using namespace std;
int main(){
	int n,flag=0;
	cout<<"enter no of elemnt ";
	cin>>n;
	int *a=new int[n];
	for(int x=0;x<n;x++)
	{
		cout<<"enter element at "<<x<<" ";
		cin>>a[x];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			cout<<"array is not sorted";
			break;
		}
		else
		{
			flag++;
		}
	}
	if(flag==n-1)
	{
		cout<<"array is sorted";
	}
	return 0;
}
