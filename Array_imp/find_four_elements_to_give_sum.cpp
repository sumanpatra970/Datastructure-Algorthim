#include<iostream>
using namespace std;
int main(){
	int a[6]={1,0,3,5,7,6};
	int k=16;
	int maxx=-1;
	for(int i=0;i<6;i++){
		maxx=max(maxx,a[i]);
	}
	int h[maxx+1];
	for(int i=0;i<maxx+1;i++){
		h[i]=0;
	}
	for(int i=0;i<6;i++){
		h[a[i]]++;
	}
	for(int x=0;x<6;x++){
		for(int y=x+1;y<6;y++){
			for(int z=y+1;z<6;z++){
				int d=k-(a[x]+a[y]+a[z]);
				if(d>0 && d<maxx+1 && h[d]>0 && d!=a[x] && d!=a[y] && d!=a[z]){
					cout<<a[x]<<" "<<a[y]<<" "<<a[z]<<" "<<d<<endl;
				}
			}
		}
	}
}
