#include<iostream>
using namespace std;
int main(){
	int a[6]={-1,-1,5,3,2,-3};
	int res=1;
	int tp;
	int fp=1;
	for(int i=0;i<6;i++){
		fp=fp*a[i];
		if(i==0){
			tp=a[i];
		}
		else if(fp>tp){
			tp=fp;
		}
	}
	cout<<tp;
	return 0;
}
