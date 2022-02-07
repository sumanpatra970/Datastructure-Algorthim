//here 0-building 1-space . code is same as count binary string .
#include<iostream>
using namespace std;
int main(){
	int n=4;
	int dp[2][n+1];
	dp[0][0]=0;
	dp[1][0]=0;
	dp[0][1]=1;
	dp[1][1]=1;
	for(int i=2;i<n+1;i++){
		dp[0][i]=dp[1][i-1];
		dp[1][i]=dp[0][i-1]+dp[1][i-1];
	}
	for(int x=0;x<5;x++){
		cout<<dp[0][x]<<" "<<dp[1][x];
		cout<<endl;
	}
}
