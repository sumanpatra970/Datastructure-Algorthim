#include<iostream>
using namespace std;
int main(){
	int n=6;
	int a[n]={0,1,2,0,0,1};
	int c0,c1,c2;
	c0=0;
	c1=0;
	c2=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			c0++;
		}
		else if(a[i]==1){
			c1++;
		}
		else{
			c2++;
		}
	}
	for(int m=0;m<c0;m++){
		cout<<"0"<<" ";
	}
	for(int nn=0;nn<c1;nn++){
		cout<<"1"<<" ";
	}
	for(int o=0;o<c2;o++){
		cout<<"2"<<" ";
	}
	return 0;
}
