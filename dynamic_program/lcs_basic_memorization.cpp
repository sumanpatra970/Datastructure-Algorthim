#include<iostream>
using namespace std;
int lcs(string ip1,string ip2,int m,int n,int dp[6][6]){
	if(m==0 || n==0){
		return 0;
	}
	if(dp[m][n]!=-1){
		return dp[m][n];
	}
	else{
		if(ip1[m-1]==ip2[n-1]){
			dp[m][n]=1+lcs(ip1,ip2,m-1,n-1,dp);
			return 1+lcs(ip1,ip2,m-1,n-1,dp);
		}
		else{
			dp[m][n]=max(lcs(ip1,ip2,m-1,n,dp),lcs(ip1,ip2,m,n-1,dp));
			return max(lcs(ip1,ip2,m-1,n,dp),lcs(ip1,ip2,m,n-1,dp));
		}	
	}
}
int main(){
	string ip1="abcdg";
	string ip2="abcfg";
	int m=5;
	int n=5;
	int dp[6][6];
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			dp[i][j]=-1;
		}
	}
	cout<<lcs(ip1,ip2,m,n,dp)<<endl;
	for(int x=0;x<6;x++){
		for(int y=0;y<6;y++){
			cout<<dp[x][y]<<" ";
		}
		cout<<endl;
	}
}
