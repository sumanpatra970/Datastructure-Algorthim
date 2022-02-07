//program of knapsnack using memorization
#include<iostream>
using namespace std;
class program{
	public:
	int t[6][8];
	int knapsnack(int wt[],int val[],int W,int n){
		if(n==0 || W==0)
		{
			return 0;
		}
		if(t[n][W]!=-1)
		{
			return t[n][W];
		}
		else
		{
			if(wt[n-1]<W)
			{
				return t[n][W]=max(val[n-1]+knapsnack(wt,val,W-wt[n-1],n-1),knapsnack(wt,val,W,n-1));
			}
			if(wt[n-1]>W)
			{
				return t[n][W]=knapsnack(wt,val,W,n-1);
			}
		}
	}
};
int main(){
	int n=5;
	int W=7;
	int wt[5]={5,4,3,2,1};
	int val[5]={3,7,8,9,12};
	program p;
	for(int x=0;x<6;x++)
	{
		for(int y=0;y<8;y++)
		{
			p.t[x][y]=-1;
		}
	}
	cout<<"max profit is ";
	cout<<p.knapsnack(wt,val,W,n);
}
