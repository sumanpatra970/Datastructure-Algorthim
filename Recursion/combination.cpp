#include<iostream>
using namespace std;
void combination(int n,int i,int c,int *a){
	if(i==n){
		if(c==2){
			for(int i=0;i<4;i++){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
		return ;
	}
	a[i]=1;
	combination(n,i+1,c+1,a);
	a[i]=0;
	combination(n,i+1,c,a);
	return;
}
int main(){
	int a[4]={0,0,0,0};
	combination(4,0,0,a);
	return 0;
}
