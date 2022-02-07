#include<iostream>
using namespace std;
int main(){
	int minn=6000;
	int n=4;
	int sum=0;
	int a[4]={2,3,4,5};
	for(int p=0;p<n;p++){
		sum=sum+a[p];
	}
	int t=sum;
	sum=sum/2;
	cout<<sum<<" "<<t<<endl;
		int dp[n+1][sum+1];
		for(int col=1;col<sum+1;col++){
			dp[0][col]=0;
		}
		for(int row=0;row<n+1;row++){
			dp[row][0]=1;
		}
		for(int i=1;i<n+1;i++){
			for(int j=1;j<sum+1;j++){
				dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
			}
		}		
		for(int d=0;d<sum+1;d++){
			if(dp[n][d]==1){
				int temp=t-d;
				int sd=temp-d;
				cout<<"d "<<d<<"temp "<<temp<<"sd "<<sd<<endl;
				if(minn>sd){
					minn=sd;
				}		
			}
		}
	cout<<minn;
	return 0;
}
