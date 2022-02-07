#include<iostream>
using namespace std;
int sol(int *a,int i,int j){
	int minn=900000;
	for(int k=i;k<j;k++){
		int op;
		op=sol(a,i,k)+sol(a,k+1,j);
		op=op+a[i-1]*a[k]*a[j];
		if(minn>op){
			minn=op;
		}
		return minn;
	}
}
int main(){
	int a[6]={2,3,4,5,2};
	cout<<sol(a,1,5);
	return 0;
}
