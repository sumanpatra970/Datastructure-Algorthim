#include<iostream>
using namespace std;
int main(){
	string st="213450";
	int n=st.length();
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<n+1;i++){
		if(st[i-2]=='0' && st[i-1]==0){
			dp[i]=0;
		}
		else if(st[i-2]!='0' && st[i-1]==0){
			if(st[i-2]=='1' || st[i-2]=='2'){
				dp[i]=dp[i-2];
			}
			else{
				dp[i]=0;
			}
		}
		else if(st[i-2]=='0' && st[i-1]!=0){
			dp[i]=dp[i-1];
		}
		else{
			if(st[i-2]=='1' || st[i-1]==2){
				dp[i]=dp[i-1]+dp[i-2];
			}
			else{
				dp[i]=dp[i-1];
			}
		}
	}
}
