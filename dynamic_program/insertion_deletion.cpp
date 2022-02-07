#include<iostream>
using namespace std;
int main(){
	string x="heap";
	string y="pea";
	int m=4;
	int n=3;
	int dp[m+1][n+1];
	for(int c=0;c<4;c++){
		dp[0][c]=0;
	}
	for(int d=0;d<5;d++){
		dp[d][0]=0;
	}
	for(int i=1;i<5;i++){
		for(int j=1;j<4;j++){
			if(x[i-1]==y[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	for(int a=0;a<5;a++){
		for(int b=0;b<4;b++){
			cout<<dp[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"insertion required = "<<n-dp[m][n]<<endl;
	cout<<"deletion required = "<<m-dp[m][n];
	return 0;
}
