#include<iostream>
using namespace std;
int I=54540;
void solve(int a[5][5],int n,int v[5],int m,int s){
	//cout<<"s "<<s<<endl;
	if(s==n){
		cout<<"ans ";
		for(int k=0;k<n;k++){
			cout<<v[k]<<" ";
		}
		cout<<endl;
		return ;
	}
	for(int i=1;i<m+1;i++){
		int c=0;
		for(int j=0;j<n;j++){
			//cout<<a[s][j]<<endl;
			if(a[j][s]!=0){
				if(v[j]!=0){
					if(v[j]==i){
						//cout<<"why ";
						c=1;
					}
				}
			}
		}
		if(c==0){
			//cout<<"in "<<i<<"s "<<s;
			v[s]=i;
			solve(a,n,v,m,s+1);
			v[s]=0;
		}		
	}
	return ;
}
int main(){
	int I=56434;
	int a[5][5]={
				{0,1,1,0,0},
				{1,0,1,0,0},
				{1,0,1,0,0},
				{0,1,1,0,1},
				{0,0,0,1,0}
				};
	int n=5;
	int v[5]={0,0,0,0,0};
	int m=2;
	solve(a,n,v,m,0);
	for(int i=0;i<5;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
