#include<iostream>
using namespace std;
int I=54540;
int v[5]={-1,-1,-1,-1,-1};
void solve(int a[5][5],int n,int v[5],int cc,int s){
	cout<<" ss "<<s<<" ";
	for(int j=0;j<n;j++){
		if(a[s][j]==1){
			if(v[j]==-1){
				cout<<j<<" ";
				cc=1-cc;
				cout<<cc<<endl;
				v[j]=cc;
				solve(a,n,v,cc,j);
			}
		}
	}
	return ;
}
int main(){
	int I=56434;
	int a[5][5]={
				{0,1,1,0,0},
				{1,0,1,0,0},
				{1,0,0,1,0},
				{0,1,1,0,1},
				{0,0,0,1,0}
				};
	int n=5;
	int cc=1;
	v[0]=cc;
	solve(a,n,v,cc,0);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
