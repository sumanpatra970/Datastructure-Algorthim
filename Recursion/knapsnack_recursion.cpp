//program for 0/1 knapsnnack
#include<iostream>
using namespace std;
class program{
	public:
	int knapsnack(int wt[],int val[],int W,int n){
		if(n==0 || W==0)
		{
			return 0;
		}
		if(wt[n-1]<W)
		{
			return max(val[n-1]+knapsnack(wt,val,W-wt[n-1],n-1),knapsnack(wt,val,W,n-1));
		}
		if(wt[n-1]>W)
		{
			return knapsnack(wt,val,W,n-1);
		}
	}
};
int main(){
	int n=5;
	int W=7;
	int wt[5]={5,4,3,2,1};
	int val[5]={3,7,8,9,12};
	program p;
	cout<<"max profit is ";
	cout<<p.knapsnack(wt,val,W,n);
	return 0;
}
