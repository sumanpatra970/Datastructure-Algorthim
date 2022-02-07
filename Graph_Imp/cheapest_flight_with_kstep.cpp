#include<iostream>
using namespace std;
int minn=80000;
void solve(int a[5][5],int *v,int src,int k,int sum,int des){
	if(src==des){
		//cout<<"sum "<<sum<<" min "<<minn;
		if(sum<minn){
			minn=sum;
		}
		return ;
	}
	if(k==0){
		return ;
	}
	for(int i=0;i<5;i++){
		if(v[i]==0 && a[src][i]!=0){
			v[i]=1;
			solve(a,v,i,k-1,sum+a[src][i],des);
			v[i]=0;
		}
	}
}
int main(){
	int a[5][5]={{0,100,300,0,0},
				{0,0,0,200,0},
				{0,0,0,0,10},
				{0,0,150,0,0},
				{0,0,0,0,0}};
	int v[5]={0,0,0,0,0};
	v[0]=1;
	int sum=0;
	int k=3;
	solve(a,v,0,k,sum,4);
	cout<<minn;
}
