#include<iostream>
using namespace std;
void solve(int *a,int l,int h,int k){
	if(l>h){
		return ;
	}
	int mid=(l+h)/2;
	if(a[mid]==k){
		cout<<"found";
		return ;
	}
	if(a[l]<a[mid]){
		if(k>a[l] && k<a[mid]){
			solve(a,l,mid-1,k);
		}
		else{
			solve(a,mid+1,h,k);
		}
	}
	else{
		if(k>a[mid] && k<a[h]){
			solve(a,mid+1,h,k);
		}
		else{
			solve(a,l,mid-1,k);
		}
	}
}
int main(){
	int a[6]={10,20,30,40,5,8};
	int k=5;
	int l=0;
	int h=5;
	solve(a,l,h,k);
}
