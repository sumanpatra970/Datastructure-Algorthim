#include<iostream>
using namespace std;
int main(){
	int coin[4]={2,3,5,6};
	int sum=10;
	int dp[5][11];
	int maximum=6550;
	for(int b=1;b<11;b++){
		dp[0][b]=maximum;
	}
	for(int c=0;c<5;c++){
		dp[c][0]=0;
	}
	for(int d=1;d<11;d++){
		if(d%coin[0]==0){
			dp[1][d]=d/coin[0];
		}
		else{
			dp[1][d]=maximum;
		}
	}
	for(int i=2;i<5;i++){
		for(int j=1;j<11;j++){
			if(j<=coin[i]){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=min(dp[i-1][j],dp[i][j-coin[i-1]]+1);
			}
		}
	}
	for(int p=0;p<5;p++){
		for(int q=0;q<11;q++){
			cout<<dp[p][q]<<" ";
		}
		cout<<endl;
	}
}
