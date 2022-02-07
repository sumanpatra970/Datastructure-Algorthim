//program to search an elemnet in an array linear searchs
#include<iostream>
using namespace std;
int main(){
	int n;
	n=5;
	int a[5]={2,3,4,5,1};
	int val;
	cout<<"enter element to search ";
	cin>>val;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			cout<<"element found at "<<i;
			flag++;
			break;
		}
	}
	if(!flag)
	{
		cout<<"element not found ";
	}
	return 0;
}
