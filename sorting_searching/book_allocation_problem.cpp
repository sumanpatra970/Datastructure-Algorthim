#include<iostream>
using namespace std;
bool feasible(int *a,int mid,int k){
	int sum=0;
	int kk=0;
	for(int i=0;i<4;i++){
		sum=sum+a[i];
		if(sum>mid){
			kk++;
		}
	}
	if(kk<=k){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int a[4]={10,10,5,20};
	int sum=0;
	for(int i=0;i<4;i++){
		sum=sum+a[i];
	}
	int l=20;
	int h=sum;
	int k=2;
	int res;
	while(l<h){
		int mid=(l+h)/2;
		if(feasible(a,mid,k)){
			res=mid;
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout<<"res "<<res;
}
