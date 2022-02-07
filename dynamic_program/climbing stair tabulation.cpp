#include<iostream>
using namespace std;
void solution(int n,int *dp){
	for(int i=1;i<n+1;i++){
		if(i==1){
			dp[i]=dp[i-1];
		}
		else if(i==2){
			dp[i]=dp[i-1]+dp[i-2];
		}
		else{
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
	}
}
int main(){
	int n=6;
	int dp[n+1];
	dp[0]=1;
	solution(n,dp);
	cout<<dp[n];
}
