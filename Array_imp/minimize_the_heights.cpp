#include<iostream>
using namespace std;
int main(){
	int a[7]={22,30,46,55,60,70,15};
	int n=7;
	int b[7]={15,22,30,46,55,60,70};
	int minn=8000;
	int lp;
	int hp;
	int k=4;
	for(int i=1;i<n;i++){
		if(b[i]-b[i-1]<minn){
			//cout<<" in ";
			minn=b[i]-b[i-1];
			lp=i-1;
			hp=i;
		}
	}
	int nn=n/2;
	for(int j=0;j<nn;j++){
		b[j]=b[j]+k;
	}
	for(int kk=nn;kk<n;kk++){
		b[kk]=b[kk]-k;
	}
	int maxx=-1;
	minn=8000;
	for(int ii=0;ii<n;ii++){
		maxx=max(maxx,b[ii]);
	}
	for(int jj=0;jj<n;jj++){
		minn=min(minn,b[jj]);
	}
	cout<<maxx<<" "<<minn<<" ans "<<maxx-minn;
	return 0;
}
