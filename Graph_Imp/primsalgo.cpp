#include<iostream>
using namespace std;
int main(){
	int a[6][6]={{0,1,8,0,0,0},{0,0,9,7,0,0},{0,0,0,0,4,0},{0,0,0,0,0,3},{0,0,0,0,0,5},{0,0,0,0,0,0}};
	int b[2][6];
	int vst[6]={0,0,0,0,0,0};
	int x,y;
	int u,v;
	int minn=8000;
	for(int c=0;c<6;c++){
		for(int d=0;d<6;d++){
			if(a[c][d]!=0){
				if(minn>a[c][d]){
					minn=a[c][d];
					x=c;
					y=d;
				}
			}
		}
	}
	vst[x]=1;
	vst[y]=1;
	b[0][0]=x;
	b[1][0]=y;
	int counter=0;
	while(counter<6){
		u=b[0][counter];
		v=b[1][counter];
		int mini=8000;
		cout<<"u "<<u<<" v "<<v<<endl;
		for(int k=0;k<6;k++){
			if(a[u][k]!=0){
				if(mini>a[u][k] && vst[k]==0){
					mini=a[u][k];
					x=v;
					y=k;
				}
			}
		}
		for(int l=0;l<6;l++){
			if(a[v][l]!=0){
				if(mini>a[v][l] && vst[l]==0){
					mini=a[v][l];
					x=u;
					y=l;
				}
			}
		}
		cout<<"min "<<mini<<endl;
		counter++;
		vst[y]=1;
		b[0][counter]=x;
		b[1][counter]=y;
	}
	for(int p=0;p<7;p++){
		cout<<b[0][p]<<" "<<b[1][p];
	}
	return 0;
}
