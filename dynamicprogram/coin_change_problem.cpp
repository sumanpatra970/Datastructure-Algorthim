//program of coin change problem using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[6][12];
	void knapsnack(int arr[],int sum,int n){
		for(int jj=0;jj<6;jj++)
		{
			t[0][jj]=0;
		}
		for(int ii=0;ii<5;ii++)
		{
			t[ii][0]=1;
		}
		for(int i=1;i<5;i++)
		{
			for(int j=1;j<6;j++)
			{
				if(arr[i-1]<=j)
				{
					t[i][j]=(t[i][j-arr[i-1]]) + (t[i-1][j]);
				}
				if(arr[i-1]>j)
				{
					t[i][j]=t[i-1][j];
				}
			}
		}
	}
};
int main(){
	int n=4;
	int sum=5;
	int arr[4]={1,2,3,5};
	program p;
	p.knapsnack(arr,sum,n);
	cout<<"no of ways are "<<p.t[4][5];
}
