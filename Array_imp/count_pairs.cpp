#include<iostream>
using namespace std;
int main(){
	int a[5]={12,2,3,4,6};
	int b[5]={11,10,9,8,5};
	int maxx=-1;
	int s=12;
	for(int i=0;i<5;i++){
		maxx=max(maxx,b[i]);
	}
	int h[maxx];
	for(int k=0;k<maxx+1;k++){
		h[k]=0;
	}
	for(int j=0;j<5;j++){
		h[b[j]]=h[b[j]]+1;
	}
	for(int l=0;l<5;l++){
		int cc=s-a[l];
		if(h[cc]!=0){
			cout<<a[l]<<"->"<<cc<<endl;
		}
	}
	return 0;
}
