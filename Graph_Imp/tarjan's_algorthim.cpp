//program for DFS of graph
#include<iostream>
#include<stack>
using namespace std;
int timer=-1;
class node{
	public:
	int n;
	int d[5]={-1,-1,-1,-1,-1};
	int l[5]={-1,-1,-1,-1,-1};
	int p[5]={-1,-1,-1,-1,-1};
	int v[5];
	int b[5][5]={{0,1,1,1,1},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,0,0,0}};
	stack<int> st;
	void dfs(int u,int prev)
	{
			cout<<u<<" ";
			v[u]=1;
			for(int j=0;j<n;j++)
			{
				if(b[u][j]==1){
					if(v[j]==0){
					timer++;
					d[u]=timer;
					l[u]=timer;
					p[u]=prev;
					v[j]=1;	
					dfs(j,u);
					l[u]=min(l[u],l[j]);
					}
				else{
					if(j!=p[u]){
						l[u]=d[j];
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
	cout<<"DFS of graph is : ";
	nn.dfs(i,-1);
	for(int i=0;i<nn.n;i++){
		cout<<nn.l[i];
	}
	return 0;
}
