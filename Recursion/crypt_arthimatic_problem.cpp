#include<iostream>
using namespace std;
void solution(int *a,int ps,int n){
	if(ps==10){
		if(a[1]+a[2]+a[3]+a[4]+a[5]==16){
			for(int i=0;i<10;i++){
				cout<<a[i]<<" ";
			}
			cout<<"ok";
		}
		cout<<"not ok";
		return ;
	}
	for(int i=ps;i<10;i++){
		if(a[i]==0){
			a[i]=i;
			solution(a,ps+1,n);
			a[i]=0;
		}
	}
}
int main(){
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	solution(a,1,10);
	return 0;
}
