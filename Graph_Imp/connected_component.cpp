#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(int a[4][4],int src,int des,int *v,vector<int> vst){
	if(src==des){
		vst.push_back(src);
		v[src]=1;
		return vst;
	}
	else{
		v[src]=1;
		vst.push_back(src);
		for(int i=0;i<4;i++){
			if(v[i]==0 && a[src][i]==1){
				vst=solve(a,i,des,v,vst);
			}
		}
		return vst;
	}
}
int main(){
	//int a[4][4]={{0,1,0,0},{1,0,0,0},{0,0,0,1},{0,0,1,0}};
	int a[4][4]={{0,1,1,0},{1,0,1,0},{1,1,0,1},{0,0,1,0}};
	int src=0;
	int des=3;
	int v[4]={0,0,0,0};
	for(int i=0;i<4;i++){
		vector<int> vst;
		int counter=0;
		if(v[i]==0){
			vst=solve(a,i,des,v,vst);
			vector<int> :: iterator itr;
			for(itr=vst.begin();itr!=vst.end();itr++){
				cout<<*itr<<" ";
				counter++;
			}
			cout<<endl;
			if(counter==des+1){
				cout<<"all connected";
			}
			else{
				cout<<"all not connected ";
			}			
		}	
	}
}
