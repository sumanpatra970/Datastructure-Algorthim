#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,9,5,6};
	int b[5]={2,4,10,6,7};
	int c[5]={4,5,6,7,8};
	int maxx=0;
	for(int i=0;i<5;i++){
		maxx=max(maxx,a[i]);
	}
	for(int j=0;j<5;j++){
		maxx=max(maxx,b[j]);
	}
	for(int k=0;k<5;k++){
		maxx=max(maxx,c[k]);
	}
	int h[maxx];
	for(int l=0;l<maxx+1;l++){
		h[l]=0;
	}
	for(int ii=0;ii<5;ii++){
		h[a[ii]]=h[a[ii]]+1;
	}
	for(int jj=0;jj<5;jj++){
		h[b[jj]]=h[b[jj]]+1;
	}
	for(int kk=0;kk<5;kk++){
		h[c[kk]]=h[c[kk]]+1;
	}
	for(int x=0;x<maxx+1;x++){
		if(h[x]>=3){
			cout<<x;
		}
	}
	return 0;
}
