#include<iostream>
using namespace std;
void solve(int a[6][6],int i,int j,bool v[6][6]){
	if(i<0 || j<0 || i>5 || j>5 || a[i][j]==1 || v[i][j]==true){
		return ;
	}
	v[i][j]=true;
	solve(a,i-1,j,v);
	solve(a,i,j-1,v);
	solve(a,i,j+1,v);
	solve(a,i+1,j,v);
	return ;
}
int main(){
	int a[6][6]={{0,0,1,1,1,1},
				{0,0,1,1,1,1},
				{1,1,0,0,0,0},
				{1,1,0,0,0,0},
				{1,1,1,1,1,1},
				{1,1,1,0,0,1}};
	int count=0;
	bool v[6][6];
	for(int x=0;x<6;x++){
		for(int y=0;y<6;y++){
			v[x][y]=false;
		}
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(v[i][j]==false && a[i][j]==0){
				solve(a,i,j,v);
				count++;	
			}
		}
	}
	cout<<count;
	return 0;
}
