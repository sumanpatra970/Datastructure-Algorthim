//program to find duplicate element in an sorted array
#include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,3,6,8};
	int n=5;
	int val;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		val=a[i];
		int l=0;
		int h=n;
		int mid;
		while(l<h)
		{
			mid=(l+h)/2;
			if(a[mid]==val && mid!=i)
			{
				cout<<"duplicate element is "<<a[mid];
				flag=1;
				break;
			}
			else if(val<a[mid])
			{
				h=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"no duplicate elemnt found ";
	}
	return 0;
}
