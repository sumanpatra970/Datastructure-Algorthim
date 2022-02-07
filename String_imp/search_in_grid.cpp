#include<iostream>
using namespace std;
void solve(char a[3][3],string s,int r,int c,int p,string op){
	//cout<<r<<" "<<c<<endl;
	if(p==3){
		if(s.compare(op)==0){
			cout<<op<<" ";
		}
		return ;
	}
	if(s.compare(op)==0){
		cout<<op<<" ";
		return ;
	}
	char ch=s[p];
	if(a[r-1][c]==s[p]){
		solve(a,s,r-1,c,p+1,op+ch);
	}
	if(a[r][c+1]==s[p]){
		solve(a,s,r,c+1,p+1,op+ch);
	}
	if(a[r+1][c]==s[p]){
		solve(a,s,r+1,c,p+1,op+ch);
	}
	if(a[r][c-1]==s[p]){
		solve(a,s,r,c-1,p+1,op+ch);
	}
	return ;
}
int main(){
	char grid[3][3]={{'a','b','c'},{'d','r','f'},{'g','h','i'}};
	int r=3;
	int c=3;
	string s="abc";
	int p=1;
	string op="a";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(grid[i][j]==s[0]){
				solve(grid,s,i,j,p,op);
			}
		}
	}
}
