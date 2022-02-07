#include<iostream>
using namespace std;
int main(){
	int n=4;
	int sum=8;
	int a[4]={2,3,4,5};
	int dp[n+1][sum+1];
	for(int col=1;col<sum+1;col++){
		dp[0][col]=0;
	}
	for(int row=0;row<n+1;row++){
		dp[row][0]=1;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(j<a[i-1]){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];	
			}
		}
	}
	for(int x=0;x<n+1;x++){
		for(int y=0;y<sum+1;y++){
			cout<<dp[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
