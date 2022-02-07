#include<iostream>
using namespace std;
int main(){
	int n=6;
	int a[n]={11,-10,-12,8,9,-4};
	for(int i=0;i<n;i++){
		if(a[i]<0){
			cout<<a[i]<<" ";
		}
	}
	for(int j=0;j<n;j++){
		if(a[j]>=0){
			cout<<a[j]<<" ";
		}
	}
	return 0;
}
