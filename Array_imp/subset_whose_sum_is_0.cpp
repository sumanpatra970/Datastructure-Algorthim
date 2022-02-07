#include<iostream>
using namespace std;
int main(){
	int a[6]={1,4,5-5,8,2};
	int n=6;
	int f=0;
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=i;j<n;j++){
			s=s+a[j];
			if(s==0){
				f=1;
				break;
			}
		}
	}
	if(f==1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
