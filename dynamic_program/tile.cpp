#include<iostream>
using namespace std;
int main(){
	int n=6;
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<n+1;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	for(int j=0;j<n+1;j++){
		cout<<dp[j]<<" ";
	}
	return 0;
}
