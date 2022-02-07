//program for minimum subset difference using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[6][12];
	void knapsnack(int arr[],int sum,int n){
		for(int jj=0;jj<12;jj++)
		{
			t[0][jj]=0;
		}
		for(int ii=0;ii<6;ii++)
		{
			t[ii][0]=1;
		}
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<12;j++)
			{
				if(arr[i-1]<=j)
				{
					t[i][j]=(t[i-1][j-arr[i-1]]) + (t[i-1][j]);
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
	int n=5;
	int diff=6;
	int arr[5]={6,4,3,2,1};
	program p;
	int sum=0;
	for(int t=0;t<5;t++)
	{
		sum=sum+arr[t];
	}
	sum=(sum+diff)/2;
	p.knapsnack(arr,sum,n);
	cout<<"min subset difference is "<<p.t[5][11];
}
