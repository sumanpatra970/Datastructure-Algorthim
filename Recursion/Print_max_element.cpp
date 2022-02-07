#include<iostream>
using namespace std;
int max(int *a,int idx,int size){
	if(idx==size){
		return a[idx];
	}
	int maxs=max(a,idx+1,size);
	if(maxs<a[idx]){
		return a[idx];
	}
	else{
		return maxs;
	}
}
int main(){
	int n;
	cout<<"enter no n ";
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cout<<"enter element ";
		cin>>a[i];
	}
	cout<<max(a,0,n);
}
