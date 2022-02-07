//program to get first-occurence of no in array using recursion
#include<iostream>
using namespace std;
int FirstOcc(int *a,int n,int no){
	if(n==5)
	{
		return -1;
	}
	if(a[n]==no)
	{
		return n;
	}
	return FirstOcc(a,n+1,no);
}
int main(){
	int a[5]={1,9,7,3,2};
	int n=5;
	int no;
	cout<<"enter no to search ";
	cin>>no;
	int f=FirstOcc(a,0,no);
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
