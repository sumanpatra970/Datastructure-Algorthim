//program for lcs using memorization
#include<iostream>
using namespace std;
class program{
	public:
	int t[7][7];
	int lcs(string x,string y,int m,int n){
		if(m==0 || n==0)
		{
			return 0;
		}
		if(t[m][n]!=-1)
		{
			return t[m][n];
		}
		if(x[m-1]==y[n-1])
		{
			return t[m][n]=1+lcs(x,y,m-1,n-1);
		}
		else
		{
			return t[m][n]=max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
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
			p.t[i][j]=-1;
		}
	}
	cout<<"lcs is "<<p.lcs(x,y,6,6);
}
