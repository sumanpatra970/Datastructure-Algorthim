#include<iostream>
using namespace std;
int main(){
	int a[8]={10,43,5,23,55,60,10,12};
	int h[8]={0,0,0,0,0,0,0,0};
	int hh[8]={0,0,0,0,0,0,0,0};
	int lm=8000;
	int maxx=-1;
	for(int i=0;i<8;i++){
		int m;
		if(a[i]<lm){
			lm=a[i];
			m=a[i]-lm;
			maxx=max(maxx,m);
			h[i]=maxx;
		}
		else{
			m=a[i]-lm;
			maxx=max(maxx,m);
			h[i]=maxx;
		}
	}
	for(int j=0;j<8;j++){
		cout<<h[j]<<" ";
	}
	int lma=-1;
	int maxxx=-1;
	for(int x=7;x>=0;x--){
		int p;
		if(a[x]>lma){
			lma=a[x];
			p=lma-a[x];
			maxxx=max(maxxx,p);
			hh[x]=maxxx;
		}
		else{
			p=lma-a[x];
			maxxx=max(maxxx,p);
			hh[x]=maxxx;
		}
	}
	cout<<endl;
	for(int k=0;k<8;k++){
		cout<<hh[k]<<" ";
	}
	return 0;
}
