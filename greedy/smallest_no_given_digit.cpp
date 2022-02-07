#include<iostream>
using namespace std;
void solve(int sum,int p,int d,int n,string op){
	if(p==d){
		if(sum==n){
			cout<<"ok "<<op<<endl;
		}
		return ;
	}
	for(int i=0;i<10;i++){
		char ch=i+'0';
		solve(sum+i,p+1,d,n,op+ch);
	}
}
int main(){
	int n=15;
	int d=2;
	int p=0;
	int sum=0;
	string op="";
	for(int i=0;i<10;i++){
		char ch=i+'0';
		solve(sum+i,p+1,d,n,op+ch);
	}
	return 0;
}
