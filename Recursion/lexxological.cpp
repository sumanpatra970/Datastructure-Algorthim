#include<iostream>
using namespace std;
void lp(int i,int n){
	if(i>n){
		return ;
	}
	cout<<i<<endl;
	for(int j=0;j<=9;j++){
		lp(10*i+j,n);
	}
}
int main(){
	int n=1000;
	for(int i=1;i<10;i++){
		lp(i,n);	
	}
}
