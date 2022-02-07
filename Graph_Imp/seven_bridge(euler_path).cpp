//program for DFS of graph
#include<iostream>
#include<vector>
using namespace std;

class node{
	public:
	int n;
	vector<int> vv;
	int v[6];
	int b[5][5]={{0,0,1,0,0},{1,0,0,0,0},{0,1,0,1,0},{0,0,0,0,1},{0,0,1,0,0}};
	void dfs(int u,int d)
	{
			for(int j=0;j<n;j++)
			{
				if(b[u][j]!=0 && v[j]==0)
				{
					v[j]=1;
					dfs(j,d);
				}
			}
		return ;
	}
	int indegree(int h){
		int cc=0;
		for(int i=0;i<n;i++){
			if(b[h][i]==1){
				cc++;
			}
		}
		return cc;
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
	nn.vv.push_back(0);
	nn.dfs(0,1);
	for(int i=0;i<nn.n;i++){
		if(nn.v[i]==0){
			int d=nn.indegree(i);
			if(d>0){
				cout<<"not euler";
			}
		}
	}
	int id[nn.n];
	for(int j=0;j<nn.n;j++){
		id[j]=nn.indegree(j);
	}
	int cc=0;
	for(int k=0;k<nn.n;k++){
		if(id[k]%2!=0){
			cc++;
		}
	}
	if(cc==0){
		cout<<"euler path";
	}
	else if(cc==2){
		cout<<"semi euler path";
	}
	else{
		cout<<"not an euler";
	}
	return 0;
}
