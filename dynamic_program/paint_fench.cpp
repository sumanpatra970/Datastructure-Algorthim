#include<iostream>
using namespace std;
int main(){
	int n=5;
	int k=3;
	int dp[2][5];
	dp[0][1]=k;
	dp[1][1]=k*k-1;
	for(int col=2;col<5;col++){
		dp[0][col]=dp[1][col-1];
		dp[1][col]=(dp[0][col-1]+dp[1][col-1])*2;
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
