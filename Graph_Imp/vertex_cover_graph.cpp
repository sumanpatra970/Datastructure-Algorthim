#include<iostream>
#include<vector>
using namespace std;
int* degree(int a[5][5],int *v){
	//cout<<"in";
	for(int i=0;i<5;i++){
		//cout<<"i "<<i<<endl;
		int f=0;
		for(int j=0;j<5;j++){
			if(a[i][j]!=0){
				f++;
			}
		}
		v[i]=f;
	}
	return v;
}
int findmax(int *v){
	int maxx=0;
	for(int i=0;i<5;i++){
		if(v[maxx]<v[i]){
			maxx=i;
		}
	}
	return maxx;
}
int main(){
	int n=5;
	int a[5][5]={
				{0,1,0,0,0},
				{1,0,1,1,0},
				{0,1,0,1,1},
				{0,1,1,0,1},
				{0,0,1,1,0}
				};
	int *v=new int[n];
	vector<int> vv;
	int c=0;
	for(int u=0;u<n;u++){
		for(int v=0;v<n;v++){
			if(a[u][v]==1){
				c++;
			}
		}
	}
	c=c/2;
	while(c!=0){
		v=degree(a,v);
		int x=findmax(v);
		vv.push_back(x);
		for(int i=0;i<n;i++){
			if(a[x][i]!=0){
				a[x][i]=0;
				a[i][x]=0;
				c--;
			}
	}
	}
	vector<int>::iterator itr;
	for(itr=vv.begin();itr!=vv.end();itr++){
		cout<<*itr<<" ";
	}
	return 0;
}
