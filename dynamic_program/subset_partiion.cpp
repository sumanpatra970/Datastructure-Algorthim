#include<iostream>
using namespace std;
int main(){
	int n=4;
	int k=3;
	int dp[5][4];
	for(int i=0;i<4;i++){
		dp[0][i]=0;
	}
	for(int j=0;j<5;j++){
		dp[j][0]=0;
	}
	for(int x=1;x<5;x++){
		for(int y=1;y<4;y++){
			if(y==1){
				dp[x][y]=1;
			}
			else if(x<y){
				dp[x][y]=0;
			}
			else{
				dp[x][y]=dp[x-1][y]+dp[x-1][y-1];
			}
		}
	}
	for(int c=0;c<5;c++){
		for(int d=0;d<4;d++){
			cout<<dp[c][d]<<" ";
		}
		cout<<endl;
	}
}
