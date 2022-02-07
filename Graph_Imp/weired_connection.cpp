#include<iostream>
int circle=0;
using namespace std;
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
}
int main(){
	int b[5][5]={{0,1,1,0,0},{1,0,1,0,0},{1,1,0,1,0},{0,0,1,0,0},{0,0,0,0,0}};
	int n=5;
	int s=0;
	int v[n]={0,0,0,0,0};
	v[0]=1;
	dfs(b,n,s,v);
	cout<<endl;
	cout<<circle;
	int vv=0;
	for(int i=0;i<n;i++){
		if(v[i]==0){
			vv++;
		}
	}
	if(vv<=circle){
		cout<<vv;
	}
	else{
		cout<<"-1";
	}
	return 0;
}
