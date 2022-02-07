//program to print true or false of target sum using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[6][12];
	void knapsnack(int arr[],int sum,int n){
		for(int jj=0;jj<12;jj++)
		{
			t[0][jj]=false;
		}
		for(int ii=0;ii<6;ii++)
		{
			t[ii][0]=true;
		}
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<12;j++)
			{
				if(arr[i-1]<=j)
				{
					t[i][j]=(t[i-1][j-arr[i-1]]) || (t[i-1][j]);
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
	int sum=11;
	int arr[5]={5,4,3,2,1};
	program p;
	p.knapsnack(arr,sum,n);
	cout<<"answer is "<<p.t[5][11];
	return 0;
}
