#include<iostream>
#include<vector>
using namespace std;
void solve(int a[4][4],int src,int des,int *v,int c){
	bool res=false;
	if(c==des+1){
		cout<<"hamilition";
		return;
	}
	else{
		for(int i=0;i<4;i++){
			if(a[src][i]==1 && v[i]==0){
				v[i]=1;
				solve(a,i,des,v,c+1);
				v[i]=0;
			}
		}
	}
	return;
}
int main(){
	int a[4][4]={{0,1,1,0},{1,0,1,0},{1,1,0,1},{0,0,1,0}};
	int src=0;
	int des=3;
	int v[4]={0,0,0,0};
	v[0]=1;
	solve(a,src,des,v,1);
}
