#include<iostream>
using namespace std;
int main(){
	int a[6]={1,5,7,7,9,9};
	int n=6;
	int k=6;
	int maxx=-1;
	for(int i=0;i<n;i++){
		maxx=max(maxx,a[i]);
	}
	int h[maxx+1];
	for(int j=0;j<maxx+1;j++){
		h[j]=0;
	}
	for(int jj=0;jj<n;jj++){
		h[a[jj]]=h[a[jj]]+1;
	}
	for(int x=0;x<maxx+1;x++){
		if(h[x]>1){
			cout<<x;
		}
	}
}
