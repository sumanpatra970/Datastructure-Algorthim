#include<iostream>
using namespace std;
void getsubseq(int *a,int op,int tar,int idx,int n,int *v){
	if(idx==n){
		if(op==tar){
			cout<<"ok we got it"<<endl;
		}
		return ;
	}
	if(op<tar){
		getsubseq(a,op+a[idx],tar,idx+1,n,v);	
	}
	getsubseq(a,op,tar,idx+1,n,v);
	return ;
}
int main(){
	int a[5]={2,3,4,5,1};
	int v[10]={0,0,0,0,0,0,0,0,0};
	getsubseq(a,0,13,0,5,v);
	return 0;
}
