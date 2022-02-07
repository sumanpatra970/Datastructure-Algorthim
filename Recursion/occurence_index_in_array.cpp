//program to find multiple occurenece of a no in an array
#include<iostream>
using namespace std;
int* LastOcc(int *a,int n,int no,int f,int &flag){
	if(n==5)
	{
		int *a=new int[f];
		return a;
	}
	if(a[n]==no)
	{
		LastOcc(a,n+1,no,f+1,flag);
		a[f]=n;
		flag=1;
		return a;
	}
	else
	{
		LastOcc(a,n+1,no,f,flag);
		return a;
	}
}
int main(){
	int a[5]={3,5,3,6,3};
	int n=5;
	int no;
	cout<<"enter no to search";
	cin>>no;
	int flag=0;
	int *b=LastOcc(a,0,no,0,flag);
	if(flag==0)
	{
		cout<<"element not found";
	}
	else
	{
		for(int i=0;i<3;i++)
		{
			cout<<b[i]<<" ";
		}
	}
	return 0;
}
