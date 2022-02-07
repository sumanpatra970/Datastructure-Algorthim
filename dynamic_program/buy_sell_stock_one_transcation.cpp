#include<iostream>
using namespace std;
int main(){
	int prices[10]={1,3,4,5,2,7,8,10,11,12};
	int dp[10];
	int bp=prices[0];
	int sp=prices[0];
	int profit=0;
	int op=0;
	for(int i=1;i<10;i++){
		if(prices[i]>prices[i-1]){
			bp=bp;
			sp=prices[i];
			profit=sp-bp;
			dp[i]=profit;
		}
		else{
			bp=prices[i];
			sp=prices[i];
			profit=sp-bp;
			dp[i]=profit;
		}
		if(op<profit){
			op=profit;
		}
	}
	for(int j=0;j<10;j++){
		cout<<dp[j]<<" ";
	}
	cout<<endl;
	cout<<op<<endl;
	return 0;
}
