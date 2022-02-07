#include<iostream>
using namespace std;
bool feasible(int *a,int m,int k){
	return true;
}
int main(){
	int n=4;
	int a[4]={1,2,3,4};
	int k=12;
	int l=0;
	int h=150;
	int res;
	while(l<=h){
		int m=(l+h)/2;
		if(feasible(a,m,k)){
			res=m;
			h=m-1;
		}
		else{
			l=m+1;
		}	
	}
	cout<<res;
}
