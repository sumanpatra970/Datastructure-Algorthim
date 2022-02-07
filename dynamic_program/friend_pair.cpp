#include<iostream>
using namespace std;
int main(){
	int n=4;
	int dp[5];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<5;i++){
		dp[i]=dp[i-1]+dp[i-2]*(i-1);
	}
	for(int j=0;j<n+1;j++){
		cout<<dp[j]<<" ";
	}
	return 0;
}
