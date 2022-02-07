#include<iostream>
using namespace std;
void permutation(int *a,int n,int c,int t,int lb){
	if(c==t){
		for(int i=0;i<4;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	for(int i=0;i<4;i++){
		if(a[i]==0 && i>lb){
			a[i]=c;
			permutation(a,n,c+1,t,i);
			a[i]=0;
		}
	}
	return ;
}
int main(){
	int a[4]={0,0,0,0};
	int n=4;
	int ci=1;
	int ti=3;
	permutation(a,n,ci,ti,-1);
	return 0;
}
