#include<iostream>
using namespace std;
int main(){
	int s=12;
	int a[6]={2,0,4,5,3,1};
	int n=6;
	bool dp[n+1][s+1];
	for(int i=0;i<s+1;i++){
		dp[0][i]=false;
	}
	for(int i=0;i<n+1;i++){
		dp[i][0]=true;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<s+1;j++){
			if(a[i-1]<=s){
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];	
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
			
		}
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<s+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
