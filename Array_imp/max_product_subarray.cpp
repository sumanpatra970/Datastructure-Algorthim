#include<iostream>
using namespace std;
int main(){
	int a[6]={1,2,-3,4,1,3};
	int n=6;
	int lp=0;
	int cp=1;
	for(int i=0;i<n;i++){
		cp=cp*a[i];
		if(lp<cp){
			lp=cp;
		}
	}
	cout<<lp;
	return 0;
}
