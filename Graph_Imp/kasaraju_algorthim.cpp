//program for DFS of graph
#include<iostream>
#include<stack>
using namespace std;
class node{
	public:
	int n;
	int v[6];
	int b[5][5]={{0,1,1,1,1},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,0,0,0}};
	stack<int> st;
	void dfs(int u)
	{
		if(v[u]==0)
		{
			cout<<u<<" ";
			v[u]=1;
			for(int j=0;j<n;j++)
			{
				if(b[u][j]==1 && v[j]==0)
				{
					dfs(j);
					st.push(j);
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
	nn.dfs(i);
	for(int kk=0;kk<6;kk++)
	{
		nn.v[kk]=0;
	}
	cout<<endl;
	for(int m=0;m<nn.n;m++){
		for(int n=0;n<nn.n;n++){
			if(nn.b[m][n]==1){
				nn.b[n][m]=1;
				nn.b[m][n]=0;
			}
		}
	}
	while(!nn.st.empty()){
		int x=nn.st.top();
		nn.st.pop();
		if(nn.v[x]==0){
			cout<<"component ";
			nn.dfs(x);
			cout<<endl;
		}
	}
	return 0;
}
