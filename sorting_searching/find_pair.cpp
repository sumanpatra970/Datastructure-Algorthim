#include<iostream>
using namespace std;
int search(int *a,int l,int h,int d){
	if(l>=h){
		return -1;
	}
	int mid=(l+h)/2;
	if(a[mid]==d){
		return mid;
	}
	if(d<a[mid]){
		search(a,l,mid-1,d);
	}
	else{
		search(a,mid+1,h,d);
	}
}
int main(){
	int a[6]={2,3,3,5,20,82};
	int n=6;
	int k=78;
	for(int i=0;i<n;i++){
		int d=search(a,0,n,k+a[i]);
		if(d!=-1){
			cout<<"pair found";
			break;
		}
	}
	return 0;
}
