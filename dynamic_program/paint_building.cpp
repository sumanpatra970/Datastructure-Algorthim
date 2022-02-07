#include<iostream>
using namespace std;
int main(){
	int a[3][5]={{2,3,4,1,2},{4,3,2,1,9},{1,3,5,6,2}};
	int dp[3][5];
	dp[0][0]=a[0][0];
	dp[1][0]=a[1][0];
	dp[2][0]=a[2][0];
	for(int col=1;col<5;col++){
		dp[0][col]=min(dp[1][col-1],dp[2][col-1])+a[0][col];
		dp[1][col]=min(dp[0][col-1],dp[2][col-1])+a[1][col];
		dp[2][col]=min(dp[1][col-1],dp[0][col-1])+a[2][col];
	}
	for(int c=0;c<3;c++){
		for(int d=0;d<5;d++){
			cout<<dp[c][d]<<" ";
		}
		cout<<endl;
	}
}
