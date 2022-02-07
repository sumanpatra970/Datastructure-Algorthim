#include<iostream>
using namespace std;
int main(){
	int n=5;
	int k=2;
	int c[5]={0,3,2,1,4};
	int maxx=-1;
	for(int i=1;i<n;i++){
		if(maxx<c[i]){
			maxx=c[i];
		}
	}
	int h[maxx+1];
	for(int i=1;i<n+1;i++){
		h[c[i]]=1;
	}
	int kk=1;
	for(int j=1;j<maxx+1;j++){
		if(h[j]!=0){
			c[kk]=j;
			kk++;
		}
	}
	int cou=0;
	kk=1;
	int mou=0;
	while(n>0){
		n=n-(k+1);
		cou=cou+c[kk];
		mou=mou+c[5-kk];
		kk++;
	}
	cout<<"min amount "<<cou<<endl;
	cout<<"max amount "<<mou;
	return 0;
}
