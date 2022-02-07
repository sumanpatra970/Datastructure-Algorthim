//climbstair with jump
#include<iostream>
using namespace std;
void solution(int *a,int *dp,int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=a[i] && i+j<7;j++){
			dp[i]=dp[i]+dp[i+j];
		}
	}
}
int main(){
	int n=6;
	int dp[n+1];
	for(int i=0;i<6;i++){
		dp[i]=0;
	}
	dp[n]=1;
	int a[n]={2,3,2,3,2,2};
	solution(a,dp,n);
	for(int i=0;i<7;i++){
		cout<<dp[i]<<" ";
	}
}
