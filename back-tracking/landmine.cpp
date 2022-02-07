#include<iostream>
using namespace std;
void solve(int a[3][3],int m,int n,int i,int j,string op,int v[3][3]){
	cout<<"i "<<i<<" j "<<j<<endl;
	if(i==m-1 && j==n-1){
		cout<<"ans "<<op<<endl;
		return ;
	}
	if(i-1>=0 && v[i-1][j]==0 && a[i-1][j]==1){
		v[i-1][j]=1;
		solve(a,m,n,i-1,j,op+"u",v);
		v[i-1][j]=0;
	}
	if(j+1<m && v[i][j+1]==0 && a[i][j+1]==1){
		v[i][j+1]=1;
		solve(a,m,n,i,j+1,op+"r",v);
		v[i][j+1]=0;
	}
	if(i+1<n && v[i+1][j]==0 && a[i+1][j]==1){
		v[i+1][j]=0;
		solve(a,m,n,i+1,j,op+"d",v);
		v[i+1][j]=1;
	}
	if(j-1>=0 && v[i][j-1]==0 && a[i][j-1]==1){
		v[i][j-1]=1;
		solve(a,m,n,i,j-1,op+"l",v);
		v[i][j-1]=0;
	}
}
int main(){
	int a[3][3]={{1,1,1},{1,0,1},{1,1,1}};
	int m=3;
	int n=3;
	int i=0;
	int j=0;
	int v[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			v[i][j]=0;
		}
	}
	string op="";
	v[i][j]=1;
	solve(a,m,n,i,j,op,v);
	v[i][j]=0;
}
