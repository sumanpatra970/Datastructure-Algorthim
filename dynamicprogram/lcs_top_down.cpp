//program for lcs using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[7][7];
	int lcs(string x,string y,int m,int n){
		for(int ii=0;ii<7;ii++)
		{
			t[0][ii]=0;
		}
		for(int jj=0;jj<7;jj++)
		{
			t[jj][0]=0;
		}
		for(int i=1;i<7;i++)
		{
			for(int j=1;j<7;j++)
			{
				if(x[i-1]==y[j-1])
				{
					t[i][j]=1+t[i-1][j-1];
				}
				else
				{
					t[i][j]=max(t[i][j-1],t[i-1][j]);
				}
			}
		}	
	}
};
int main(){
	string x="abcfgh";
	string y="abcvgh";
	program p;
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			p.t[i][j]=0;
		}
	}
	p.lcs(x,y,6,6);
	cout<<"lcs is "<<p.t[6][6];
}
