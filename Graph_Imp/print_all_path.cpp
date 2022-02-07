#include<iostream>
#include<vector>
using namespace std;
void solve(int a[4][4],int src,int des,int *v,vector<int> vst){
	bool res=false;
	if(src==des){
		vector<int> :: iterator itr;
		for(itr=vst.begin();itr!=vst.end();itr++){
			cout<<*itr<<" ";
		}
		cout<<endl;
		return;
	}
	else{
		for(int i=0;i<4;i++){
			if(a[src][i]==1 && v[i]==0){
				v[i]=1;
				vst.push_back(i);
				solve(a,i,des,v,vst);
				vst.pop_back();
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
	vector<int> vst;
	vst.push_back(0);
	solve(a,src,des,v,vst);
}
