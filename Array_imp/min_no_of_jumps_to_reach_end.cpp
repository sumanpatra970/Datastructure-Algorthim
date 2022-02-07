#include<iostream>
using namespace std;
int solve(int *a,int n){
	if(n>=5){
		return 0;
	}
	int minn=90080;
	int m;
	for(int i=1;i<=a[i];i++){
		m=solve(a,n+i);
		minn=min(minn,m);
	}
	return minn+1;
}
int main(){
	int a[5]={1,2,4,1,2};
	int n=0;
	cout<<solve(a,n);
	return 0;
}
