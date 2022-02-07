#include<iostream>
using namespace std;
int main(){
	int a[4]={1,2,4,5};
	int dp[4];
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<4;i++){
		if(a[i]==0 && a[i-1]==0){
			dp[i]=0;
		}
		else if(a[i-1]!=0 && a[i]==0){
			if(a[i-1]==1 || a[i-1]==2){
				dp[i]=dp[i-2];
			}
			else{
				dp[i]=0;
			}
		}
		else if(a[i-1]==0 && a[i]!=0){
			dp[i]=dp[i-1];
		}
		else{
			if(a[i-1]*10+a[i]<=26){
				dp[i]=dp[i-1]+dp[i-2];		
			}
			else{
				dp[i]=dp[i-1];
			}
		}
	}
	for(int x=0;x<4;x++){
		cout<<dp[x]<<" ";
	}
	return 0;
}
