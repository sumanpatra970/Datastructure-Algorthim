#include<iostream>
#include<stack>
using namespace std;
stack<int> st;
int circle=0;
void dfs(int s[5][5],int n,int b,int *v){
	cout<<b;
	for(int i=0;i<n;i++){
		if(v[i]==1 && s[b][i]==1){
			if(b-1!=i && b<i){
				circle++;
			}
		}
		if(s[b][i]==1 && v[i]==0){
			v[i]=1;
			dfs(s,n,i,v);
		}
	}
	st.push(b);
}
int indegree(int x,int b[5][5]){
	for(int i=0;i<5;i++){
		if(b[i][x]==1){
			return 1;
		}
	}
	return 0;
}
int solve(stack<int> st,int b[5][5]){
	int x=st.top();
	st.pop();
	if(indegree(x,b)==0){
		return 0;
	}
	int maxx=-1;
	int m;
	for(int i=0;i<5;i++){
		if(b[x][i]==1){
			m=solve(st,b);
		}
		if(m>maxx){
			maxx=m;
		}
	}
	return maxx+1;
}
int main(){
	int b[5][5]={{0,1,1,0,0},{0,0,1,0,0},{0,1,0,1,0},{0,0,1,0,0},{0,0,0,0,0}};
	int n=5;
	int s=0;
	int v[n]={0,0,0,0,0};
	v[0]=1;
	dfs(b,n,s,v);
	cout<<endl;
	cout<<solve(st,b);
	return 0;
}
