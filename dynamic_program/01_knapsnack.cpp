#include<iostream>
using namespace std;
int main(){
	int wt[4]={2,4,6,8};
	int profit[4]={12,11,10,8};
	int cap=10;
	int dp[5][11];
	for(int j=0;j<cap+1;j++){
		dp[0][j]=0;
	}
	for(int i=0;i<5;i++){
		dp[i][0]=0;
	}
	for(int x=1;x<5;x++){
		for(int y=1;y<11;y++){
			if(wt[x-1]>y){
				dp[x][y]=dp[x-1][y];
			}else{
				dp[x][y]=max(dp[x-1][y],dp[x-1][y-wt[x-1]]+profit[x-1]);
			}
		}
	}
	for(int c=0;c<5;c++){
		for(int d=0;d<11;d++){
			cout<<dp[c][d]<<" ";
		}
		cout<<endl;
	}
}
