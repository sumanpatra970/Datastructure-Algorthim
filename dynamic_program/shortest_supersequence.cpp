#include<iostream>
using namespace std;
int main(){
	string x="geek";
	string y="eek";
	int m=4;
	int n=3;
	int dp[m+1][n+1];
	for(int c=0;c<n+1;c++){
		dp[0][c]=0;
	}
	for(int d=0;d<m+1;d++){
		dp[d][0]=0;
	}
	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			if(x[i-1]==y[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	for(int a=0;a<m+1;a++){
		for(int b=0;b<n+1;b++){
			cout<<dp[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"shortest supersequence length "<<m+n-dp[m][n];
}
