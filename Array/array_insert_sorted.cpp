//program is to insert element in sorted array
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,7};
	int index,val;
	cout<<"enter value to insert ";
	cin>>val;
	int n=4;
	int temp;
	int j=n-1;
	while(j>-1)
	{
		if(a[j]>val)
		{
			a[j+1]=a[j];
			j--;
		}
		else
		{
			a[j+1]=val;
			break;
		}
	}
	if(j==-1)
	{
		a[0]=val;
	}
	cout<<"after insertion,elements of an array are = ";
	for(int j=0;j<n+1;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}

