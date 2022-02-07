#include<iostream>
using namespace std;
	int k=-1;
int firstoccur(int *a,int idx,int size,int d){
	if(idx==size){
		return k;
	}
	if(a[idx]==d){
		k=idx;
	}
	k=firstoccur(a,idx+1,size,d);
	return k;
}
int main(){
	int n;
	int *a;
	cout<<"enter no ";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++){
		cout<<"enter element";
		cin>>a[i];
	}
	cout<<firstoccur(a,0,n,10);
}
