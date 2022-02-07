#include<iostream>
using namespace std;
int main(){
	int a[4][3]={{1,2,3},{2,5,6},{1,7,8},{6,7,8}};
	int dp[4][3];
	for(int i=0;i<4;i++){
		dp[0][i]=a[0][i];
	}
	for(int j=1;j<4;j++){
		for(int k=0;k<3;k++){
			int minn=98;
			for(int x=0;x<3;x++){
				if(dp[j-1][x]<minn && x!=k){
					minn=dp[j-1][x];
			}		
			}
			cout<<"min "<<minn<<endl;
			dp[j][k]=minn+a[j][k];
		}
	}
	for(int c=0;c<4;c++){
		for(int d=0;d<3;d++){
			cout<<dp[c][d]<<" ";
		}
		cout<<endl;
	}
}
