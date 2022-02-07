//program of 0/1 knapsnack using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[7][9];
	void knapsnack(int wt[],int val[],int W,int n){
		for(int ii=0;ii<6;ii++)
		{
			t[ii][0]=0;
		}
		for(int jj=0;jj<8;jj++)
		{
			t[0][jj]=0;
		}
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<8;j++)
			{
				if(wt[i-1]<j)
				{
					t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
				}
				if(wt[i-1]>j)
				{
					t[i][j]=t[i-1][j];
				}
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
	for(int mm=0;mm<6;mm++)
	{
		for(int nn=0;nn<8;nn++)
		{
			p.t[mm][nn]=0;
		}
	}
	p.knapsnack(wt,val,W,n);
	cout<<"max profit is "<<p.t[5][7];
}
