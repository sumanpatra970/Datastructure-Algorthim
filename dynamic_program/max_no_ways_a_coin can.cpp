#include<iostream>
using namespace std;
int main(){
	int coin[4]={2,3,4,5};
	int sum=10;
	int dp[5][11];
	for(int i=1;i<11;i++){
		dp[0][i]=0;
	}
	for(int j=0;j<5;j++){
		dp[j][0]=1;
	}
	for(int x=1;x<5;x++){
		for(int y=1;y<11;y++){
			if(y<coin[x-1]){
				dp[x][y]=dp[x-1][y];
			}
			else{
			dp[x][y]=dp[x][y-coin[x-1]]+dp[x-1][y];	
			}
		}
	}
	for(int a=0;a<5;a++){
		for(int b=0;b<11;b++){
			cout<<dp[a][b]<<" ";
		}
		cout<<endl;
	}
}
