#include<iostream>
using namespace std;
void solve(int l,int h,int *a){
	int mid=l+(h-l)/2;
	//cout<<"mid "<<mid;
	if(mid==l){
		if(mid==h){
			cout<<"1 element"<<a[mid];
			return ;
		}
		else if(a[mid]>a[mid+1]){
			cout<<"pivot- "<<a[mid];
			return ;
		}
	}
	else if(mid==h){
		if(a[mid]>=a[mid-1]){
			cout<<"pivot -"<<a[mid];
			return ;
		}
	}
	else{
	if(a[mid]>=a[mid+1] && a[mid]>a[mid-1]){
		cout<<"pivot "<<a[mid];
		return ;
	}
	else if(a[mid]<a[h]){
			solve(l,mid-1,a);
	}
	else if(a[mid]>a[h]){
			solve(mid+1,h,a);
	}
	}
}
int main(){
	int a[8]={9,10,12,13,14,3,4,5};
	int n=8;
	int l=0;
	int h=n-1;
	solve(l,h,a);
}
