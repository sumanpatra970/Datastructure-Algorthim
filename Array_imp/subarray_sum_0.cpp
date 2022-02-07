#include<iostream>
using namespace std;
void solve(int k,int n,int s,int *a,string op){
	if(k==n){
			if(s==0){
		cout<<"ans "<<op<<" "<<k<<endl;
	}
		return ;
	}
	if(s==0){
		cout<<"ans "<<op<<" "<<k<<endl;
	}
	char ch=a[k]+'0';
	solve(k+1,n,s+a[k],a,op+ch);
	return ;
}
int main(){
	int a[6]={0,0,5,6,0,0};
	int s=0;
	int k=0;
	int n=6;
	string op="";
	for(int i=0;i<6;i++){
		char ch=a[i]+'0';
		solve(i+1,n,s+a[i],a,op+ch);
	}
	return 0;
}
