#include<iostream>
using namespace std;
int main(){
	int a[4][4]={{1,2,3,4},{2,3,4,5},{5,3,2,1},{1,6,7,8}};
	int dp[4][4];
	for(int col=3;col>=0;col--){
		for(int row=0;row<4;row++){
			if(col==3){
				dp[row][col]=a[row][col];
			}
			else{
				if(row==0 || row==3){
					dp[row][col]=max(dp[row+1][col+1],dp[row][col+1])+a[row][col];
				}
				else{
					dp[row][col]=max(max(dp[row+1][col+1],dp[row][col+1]),dp[row-1][col+1])+a[row][col];
				}
				}
			}
		}
		for(int x=0;x<4;x++){
			for(int y=0;y<4;y++){
				cout<<dp[x][y]<<" ";
			}
			cout<<endl;
		}
		return 0;
}
