//program for DFS of graph
#include<iostream>
#include<vector>
using namespace std;

class node{
	public:
	int n;
	vector<int> vv;
	int v[6];
	int b[5][5]={{0,1,1,1,1},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,0,0,0}};
	void dfs(int u,int d)
	{
		if(u==d){
			vector<int>::iterator it;
			for(it=vv.begin();it!=vv.end();it++){
				cout<<*it<<" ";
			}
			cout<<endl;
			return ;
		}
			//cout<<u<<" ";
			v[u]=1;
			for(int j=0;j<n;j++)
			{
				if(b[u][j]==1 && v[j]==0)
				{
					vv.push_back(j);
					dfs(j,d);
					vv.pop_back();
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
	nn.dfs(i,3);
	return 0;
}
