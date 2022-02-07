//program of n queen problem solution
#include<iostream>
using namespace std;
int safe(int dp[4][4],int row,int col){
	if(row==4)
	{
		return false;
	}
	for(int i=row-1;i>-1;i--)
	{
		if(dp[i][col]==1)
		{
			return false;
		}
	}
	for(int i=row-1,j=col-1;i>-1 && j>-1;i--,j--)
	{
		if(dp[i][j]==1)
		{
			return false;
		}	
	}
	for(int i=row-1,j=col+1;i>-1 && j<4;i--,j++)
	{
		if(dp[i][j]==1)
		{
			return false;
		}
	}
	return true;
}
void getsol(int dp[4][4],int row,int col){
	if(row==3 && col==3)
	{
		cout<<"yes";
		return ;
	}
	for(int col=0;col<4;col++)
	{
		if(safe(dp,row+1,col))
		{
			dp[row+1][col]=1;
			getsol(dp,row+1,col);
			dp[row+1][col]=0;
		}
	}
	return ;
}
int main(){
	int dp[4][4];
	int ir=-1;
	int ic=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			dp[i][j]=0;
		}
	}
	getsol(dp,ir,ic);
	return 0;
}
