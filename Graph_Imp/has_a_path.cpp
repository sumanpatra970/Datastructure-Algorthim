#include<iostream>
using namespace std;
bool solve(int a[4][4],int src,int des,int *v){
	bool res=false;
	if(src==des){
		return true;
	}
	else{
		for(int i=0;i<4;i++){
			if(a[src][i]==1 && v[i]==0){
				v[i]=1;
				res=solve(a,i,des,v);
				if(res==true){
					break;
				}
			}
		}
	}
	return res;
}
int main(){
	int a[4][4]={{0,1,0,0},{1,0,1,0},{0,1,0,1},{0,0,1,0}};
	int src=0;
	int des=3;
	int v[4]={0,0,0,0};
	v[0]=1;
	cout<<solve(a,src,des,v);
}
