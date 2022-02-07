#include<iostream>
using namespace std;
int main(){
	int m=2;
	int n=4;
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++){
		if(i<=m){
			dp[i]=i;
		}
		else if(i==m){
			dp[i]=2;
		}
		else{
			dp[i]=dp[i-1]+dp[i-m];
		}
	}
	for(int j=0;j<n+1;j++){
		cout<<dp[j]<<" ";
	}
	return 0;
}
