#include<iostream>
using namespace std;
void combination(int n,int i,int c,int *a){
	if(c==2){
		return;
	}
	for(int j=1;j<3;j++){
		if(j!=c){
			a[i]=c;
			combination(n,i+1,c+j,a);
			a[i]=0;	
		}
	}
	combination(n,i+1,c,a);
	return;
}
int main(){
	int a[4]={0,0,0,0};
	combination(4,0,0,a);
	return 0;
}
