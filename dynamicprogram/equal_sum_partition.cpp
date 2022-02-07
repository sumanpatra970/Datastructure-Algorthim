//program for equal sum partition
#include<iostream>
using namespace std;
class program{
	public:
	int t[6][10];
	int knapsnack(int arr[],int sum,int n){
		if(sum%2!=0)
		{
				return 0;
		}
		sum=sum/2;
		for(int jj=0;jj<10;jj++)
		{
			t[0][jj]=false;
		}
		for(int ii=0;ii<6;ii++)
		{
			t[ii][0]=true;
		}
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<10;j++)
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
	int sum=0;
	int arr[5]={5,4,6,2,1};
	for(int l=0;l<5;l++){
		sum=sum+arr[l];
	}
	program p;
	for(int mm=0;mm<6;mm++)
	{
		for(int nn=0;nn<10;nn++)
		{
			p.t[mm][nn]=0;
		}
	}
	int v=p.knapsnack(arr,sum,n);
	if(v==0)
	{
		cout<<"equal sum partition can not be formed"<<endl;
	}
	else
	{
		cout<<"equal sum partition can be formed"<<endl;
		cout<<"answer is "<<p.t[5][sum];
	}
}
