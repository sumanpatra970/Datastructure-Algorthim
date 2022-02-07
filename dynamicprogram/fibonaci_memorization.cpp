//program of fibonaci using memorization
#include<iostream>
using namespace std;
int fibonaci(int *a,int n){
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(a[n]!=0)
	{
		return a[n];
	}
	int x=fibonaci(a,n-1);
	int y=fibonaci(a,n-2);
	return a[n]=x+y;
}
int main(){
	int n=8;
	int a[8];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
	cout<<"fibonaci series no of 8 is ";
	cout<<fibonaci(a,n);
}
