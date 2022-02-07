#include<iostream>
#include<vector>
using namespace std;

class node{
	public:
	int n;
	vector<int> vv;
	int v[6];
	int b[5][5]={{0,1,0,0,1},{0,0,0,0,0},{0,1,0,0,0},{0,0,1,0,1},{0,0,0,0,0}};
	void dfs(int u,int d,int k)
	{
		if(u==d){
			cout<<"end k "<<k<<" d "<<d<<endl;
			return ;
		}
			for(int j=0;j<n;j++)
			{
				if(b[u][j]!=0 || b[j][u]!=0)
				{
					if(v[j]==0){
						if(b[j][u]!=0){
							v[j]=1;
							k=k+1;
							dfs(j,d,k);
							v[j]=0;
							k--;
						}
						else{
							v[j]=1;
							dfs(j,d,k);
							v[j]=0;
						}
					}
				}
			}
		return ;
	}
};
int main(){
	node nn;
	nn.n=5;
	int i=0;
	for(int k=0;k<6;k++)
	{
		nn.v[k]=0;
	}
	int sum=0;
	int kk=0;
	nn.v[0]=1;
	nn.dfs(i,3,kk);
	return 0;
}
