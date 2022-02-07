//program to find last occurence of no in array using recursion
#include<iostream>
using namespace std;
int LastOcc(int *a,int n,int no){
	if(n==5)
	{
		return -1;
	}
	int f=LastOcc(a,n+1,no);
	if(f==-1)
	{
		if(a[n]==no)
		{
			return n;
		}
		else
		{
			return f;
		}
	}
	else
	{
		return f;
	}
}
int main(){
	int a[5]={3,5,2,6,8};
	int n=5;
	int no;
	cout<<"enter no to search ";
	cin>>no;
	int f=LastOcc(a,0,no);
	if(f!=-1)
	{
		cout<<"found at "<<f;
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}
