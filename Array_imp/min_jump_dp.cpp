#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[n]={1,2,4,1,2};
	int dp[n];
	dp[n-1]=0;
	for(int i=n-2;i>=0;i--){
		int minn=80000;
		for(int j=1;j<=a[i];j++){
			if(i+j>=n){
				dp[i]=1;
				break;
			}
			else{
				dp[i]=min(minn,dp[i+j])+1;	
			}
		}
	}
	for(int k=0;k<n;k++){
		cout<<dp[k]<<" ";
	}
	return 0;
}
