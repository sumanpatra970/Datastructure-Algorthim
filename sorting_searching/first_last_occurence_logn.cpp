#include<iostream>
using namespace std;
int fc=-1;
void lsolve(int *a,int l,int h,int k){
	cout<<l<<" "<<h<<endl;
	if(l>=h){
		cout<<"in ";
		return ;
	}
	else{
		int mid=(l+h)/2;
		if(a[mid]==k){
			fc=mid;
		}
		if(mid==l || mid==h){
			return ;
		}
		cout<<mid<<endl;
			if(a[mid]>=k){
				lsolve(a,l,mid,k);
			}
			else{
				lsolve(a,mid,h,k);
			}
	}
}
int main(){
	int n=10;
	int a[10]={1,2,3,5,5,5,5,5,6,8};
	int l=0;
	int h=n;
	int k=5;
	lsolve(a,l,h,k);
	cout<<fc;
	return 0;
}
