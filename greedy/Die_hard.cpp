#include<iostream>
using namespace std;
void solve(int p,int h,int a,int t){
	cout<<p<<" "<<h<<" "<<a<<endl;
	if(h<=0 || a<=0){
		cout<<t<<endl;
		return ;
	}
	for(int i=0;i<3;i++){
		if(i!=p){
			if(i==0){
				solve(i,h+10,a+5,t+1);
			}
			if(i==1){
				solve(i,h-5,a-6,t+1);
			}
			if(i==2){
				solve(i,h-8,a-9,t+1);
			}
		}
	}
}
int main(){
	int h=2;
	int a=1;
	int n=3;
	int t=0;
	for(int i=0;i<3;i++){
		if(i==0){
			solve(i,h+10,a+5,t+1);
		}
		if(i==1){
			solve(i,h-5,a-6,t+1);
		}
		if(i==2){
			solve(i,h-8,a-9,t+1);
		}
	}
	return 0;
}
