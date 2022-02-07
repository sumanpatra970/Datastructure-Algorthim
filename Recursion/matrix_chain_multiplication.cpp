//program of mcm using recursion
#include<iostream>
using namespace std;
int mcm(int a[],int i,int j){
	int min=10000;
	if(i>=j)
	{
		return 0;
	}
	for(int k=i;k<=j-1;k++)
	{
		int x=mcm(a,i,k);
		int y=mcm(a,k+1,j);
		int z=a[i-1]*a[k]*a[j];
		int temp=x+y+z;
		if(min>temp){
		min=temp;
	}
	}
	return min;
}
int main(){
	int a[6]={2,3,4,2,1,2};
	int n=6;
	int i=1;
	int j=5;
	cout<<"min cost of mcm is "<<mcm(a,i,j);
	return 0;
}

