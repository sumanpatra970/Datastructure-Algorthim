#include<iostream>
using namespace std;
bool feasible(int *a,int m,int k){
	int sum=0;
	for(int i=0;i<4;i++){
		if((a[i]-m)>0){
			sum=sum+(a[i]-m);
		}
	}
	if(sum>=k){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int a[4]={20,15,10,17};
	int n=4;
	int k=7;
	int l=0;
	int maxx=-1;
	for(int i=0;i<4;i++){
		maxx=max(maxx,a[i]);
	}
	int h=maxx;
	int res;
	while(l<=h){
		int m=(l+h)/2;
		if(feasible(a,m,k)){
			res=m;
			l=m+1;
		}
		else{
			h=m-1;
		}
	}
	cout<<res;
	return 0;
}
