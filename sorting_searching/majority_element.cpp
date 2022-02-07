#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,2,3,2};
	int n=5;
	int res=a[0];
	int fre=1;
	for(int i=1;i<n;i++){
		if(a[i]==res){
			fre++;
		}
		else{
			fre--;
		}
		if(fre==0){
			res=a[i];
			fre=1;
		}
	}
	int cc=0;
	for(int i=0;i<n;i++){
		if(a[i]==res){
			cc++;
		}
	}
	if(cc>=n/2){
		cout<<"ans "<<res;
	}
	return 0;
}
