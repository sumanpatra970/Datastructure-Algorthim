#include<iostream>
using namespace std;
int main(){
	int a[6][6]={{0,1,8,0,0,0},{0,0,9,7,0,0},{0,0,0,0,4,0},{0,0,0,0,0,3},{0,0,0,0,0,5},{0,0,0,0,0,0}};
	int b[2][6];
	int vst[10]={0,0,0,0,0,0,0,0,0,0};
	int x,y;
	int u,v;
	int counter=0;
	while(counter<6){
	int minn=8000;
	for(int c=0;c<6;c++){
		for(int d=0;d<6;d++){
			if(a[c][d]!=0 && vst[a[c][d]]==0){
				if(minn>a[c][d]){
					minn=a[c][d];
					x=c;
					y=d;
				}
			}
		}
	}
	cout<<"x "<<x<<"y "<<y<<"min "<<minn<<endl;
	vst[minn]=1;
	b[0][counter]=x;
	b[1][counter]=y;
	counter++;
	}
	//for(int i=0;i<6;i++){
	//	cout<<b[0][i]<<" "<<b[1][i]<<endl;
	//}
	return 0;
}
