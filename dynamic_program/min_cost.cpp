#include<iostream>
using namespace std;
int main(){
	int a[3][3]={{1,5,6},{2,3,4},{1,9,1}};
	int dp[3][3];
	for(int i=2;i>=0;i--){
		for(int j=2;j>=0;j--){
			if(i==j && i==2){
				dp[i][j]=a[i][j];
			}
			else if(i==2){
				dp[i][j]=dp[i][j+1]+a[i][j];
			}
			else if(j==2){
				dp[i][j]=dp[i+1][j]+a[i][j];
			}
			else{
				dp[i][j]=min(dp[i][j+1],dp[i+1][j])+a[i][j];
			}
		}
	}
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<dp[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
