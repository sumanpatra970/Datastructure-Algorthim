//program to print no of deletion and insertion to get a to b using top-down
#include<iostream>
using namespace std;
class program{
	public:
	int t[5][4];
	int lcs(string x,string y,int m,int n){
		for(int ii=0;ii<5;ii++)
		{
			t[0][ii]=0;
		}
		for(int jj=0;jj<4;jj++)
		{
			t[jj][0]=0;
		}
		for(int i=1;i<5;i++)
		{
			for(int j=1;j<4;j++)
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
	string x="heap";
	string y="pea";
	program p;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			p.t[i][j]=0;
		}
	}
	p.lcs(x,y,4,3);
	cout<<"deletion required "<<4-p.t[4][3]<<endl;
	cout<<"insertion required "<<3-p.t[4][3];
}
