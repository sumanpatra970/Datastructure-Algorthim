//program to find max element in an array
#include<iostream>
using namespace std;
int max(int *a,int n){
	if(n==4)
	{
		return a[n]; 
	}
	int s=a[n];
	int smax=max(a,n+1);
	if(s>smax)
	{
		return s;
	}
	return smax;
}
int main(){
	int a[5]={1,3,5,6,7};
	cout<<"array is ";
	for(int c=0;c<5;c++)
	{
		cout<<a[c]<<" ";
	}
	cout<<endl;
	int n=5;
	cout<<"maximum element in array is ";
	cout<<max(a,0);
	return 0;
}
