//program of sequence pattern matching using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[4][7];
	int lcs(string x,string y,int m,int n){
		for(int ii=0;ii<4;ii++)
		{
			t[0][ii]=0;
		}
		for(int jj=0;jj<7;jj++)
		{
			t[jj][0]=0;
		}
		for(int i=1;i<4;i++)
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
	string x="abc";
	string y="abcvgh";
	program p;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<7;j++)
		{
			p.t[i][j]=0;
		}
	}
	p.lcs(x,y,3,6);
	if(p.t[3][6]==3)
	{
		cout<<"sequence matched";
	}
	else
	{
		cout<<"sequence unmatched";
	}
	return 0;
}
