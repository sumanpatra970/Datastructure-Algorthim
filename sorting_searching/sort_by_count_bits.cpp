#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
	return __builtin_popcount(a)>__builtin_popcount(b);
}
void sortbybit(int a[],int n){
	sort(a,a+n,comp);
}
int main(){
	int a[6]={9,8,6,4,3,2};
	int n=6;
	sortbybit(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
