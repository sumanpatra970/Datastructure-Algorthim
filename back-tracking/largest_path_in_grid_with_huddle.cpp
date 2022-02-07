#include<iostream>
using namespace std;
int maxx=-1;
string res;
void solve(int a[3][3],int i,int j,int m,int n,string op){
	if(i==m && j==n){
		cout<<op<<endl;
		if(op.length()>maxx){
			res=op;
			maxx=op.length();
		}
		return ;
	}
	if(a[i][j+1]!=0){
		solve(a,i,j+1,m,n,op+"l");	
	}
	if(a[i+1][j]!=0){
		solve(a,i+1,j,m,n,op+"d");
	}
}
int main(){
	int a[3][3]={{1,1,0},{1,0,0},{1,1,1}};
	string op="";
	solve(a,0,0,3,3,op);
	return 0;
}
