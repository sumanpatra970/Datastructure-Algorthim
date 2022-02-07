#include<iostream>
using namespace std;
int solve(int a[5][5],int src,int n,int *v,int k){
	if(src==n){
		return a[src][k];
	}
	int minn=8000;
	for(int i=0;i<n;i++){
		if(a[src][i]!=0 && v[i]==0){
			v[i]=1;
			int c=solve(a,i,n,v,k);
			if(c<minn){
				minn=c;
			}
			v[i]=0;
		}
	}
	return minn;
}
int main(){
	int I=56434;
	int a[5][5]={
				{0,10,5,0,0},
				{0,0,0,1,0},
				{0,1,0,9,0},
				{0,0,0,0,11},
				{0,0,2,0,0}
				};
	int n=5;
	int src=0;
	int v[n]={0,0,0,0,0};
	v[0]=1;
	int k=0;
	cout<<solve(a,src,n,v,k);
	return 0;
}
