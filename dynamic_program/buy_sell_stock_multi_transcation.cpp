#include<iostream>
using namespace std;
int main(){
	int prices[10]={1,3,4,5,2,7,8,10,11,12};
	int dp[10];
	int bp=0;
	int sp=0;
	int profit=0;
	int op=0;
	for(int i=1;i<10;i++){
		if(prices[i]>prices[i-1]){
			sp++;
		}
		else{
			profit=profit+prices[sp]-prices[bp];
			cout<<profit<<" "<<sp<<" "<<i<<endl;
			sp=bp=i;
		}
	}
	cout<<profit+prices[sp]-prices[bp]<<endl;
	return 0;
}
