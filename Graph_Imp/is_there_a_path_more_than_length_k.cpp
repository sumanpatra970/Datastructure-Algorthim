//program for DFS of graph
#include<iostream>
#include<vector>
using namespace std;

class node{
	public:
	int n;
	vector<int> vv;
	int v[6];
	int b[5][5]={{0,58,30,40,10},{28,0,0,10,0},{30,0,0,10,0},{40,10,10,0,0},{10,0,0,0,0}};
	void dfs(int u,int d,int sum,int k)
	{
		if(sum>k){
			cout<<"yes"<<endl;
			return ;
		}
		if(u==d){
			return ;
		}
			cout<<u<<" ";
			for(int j=0;j<n;j++)
			{
				if(b[u][j]!=0 && v[j]==0)
				{
					v[j]=1;
					dfs(j,d,sum+b[u][j],k);
					v[j]=0;
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
	int kk=100;
	nn.dfs(i,3,sum,kk);
	return 0;
}
