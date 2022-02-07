#include<iostream>
using namespace std;
int main(){
	int n=5;
	int m[n]={12,13,2,5,6};
	int a=3;
	int b=5;
	for(int i=0;i<n;i++){
		if(m[i]<a){
			cout<<m[i]<<" ";
		}
	}
	for(int i=0;i<n;i++){
		if(m[i]>=a && m[i]<=b){
			cout<<m[i]<<" ";
		}
	}
	for(int i=0;i<n;i++){
		if(m[i]>b){
			cout<<m[i]<<" ";
		}
	}
	return 0;
}
