#include<iostream>
using namespace std;
int main(){
	string x="abcdg";
	string y="abcfg";
	int m=5;
	int n=5;
	int dp[m+1][n+1];
	for(int c=0;c<6;c++){
		dp[0][c]=0;
	}
	for(int d=0;d<6;d++){
		dp[d][0]=0;
	}
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			if(x[i-1]==y[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	for(int a=0;a<6;a++){
		for(int b=0;b<6;b++){
			cout<<dp[a][b]<<" ";
		}
		cout<<endl;
	}
	int p=5;
	int q=5;
	string op="";
	while(p>=0 || q>=0){
		char ch1=x[p-1];
		char ch2=y[q-1];
		if(x[p-1]==y[q-1]){
			op=op+x[p-1];
			p--;
			q--;
		}
		else{
			int maxx=max(dp[p][q-1],dp[p-1][q]);
			if(maxx==dp[p][q-1]){
				p=p;
				q=q-1;
			}
			else{
				p=p-1;
				q=q;
			}
		}
	}
	cout<<op<<" ";
}
