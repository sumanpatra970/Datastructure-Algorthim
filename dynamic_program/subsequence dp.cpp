#include<iostream>
using namespace std;
int main(){
	int a[4]={2,3,5,10};
	int dp[2][4];
	dp[0][0]=0;
	dp[1][0]=2;
	for(int i=1;i<4;i++){
		dp[0][i]=dp[1][i-1]+a[i];
		dp[1][i]=max(dp[0][i-1],dp[1][i-1]);
	}
	for(int x=0;x<2;x++){
		for(int y=0;y<4;y++){
			cout<<dp[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
