#include<iostream>
using namespace std;
void getsubseq(int *a,int op,int tar,int idx,int n){
	if(idx==n){
		if(op==tar){
			cout<<"ok we got it"<<endl;
		}
		return ;
	}
	getsubseq(a,op+a[idx],tar,idx+1,n);
	getsubseq(a,op,tar,idx+1,n);
	return ;
}
int main(){
	int a[5]={2,3,4,5,1};
	getsubseq(a,0,13,0,5);
	return 0;
}
