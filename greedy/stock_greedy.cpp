#include<iostream>
using namespace std;
int main(){
	int a[3]={10,17,14};
	int n=3;
	int k=45;
	int res=0;
	for(int i=0;i<3;i++){
		int x=k/a[i];
		x=min(x,i+1);
		k=k-x*a[i];
		res=res+x;
		if(k<=0){
			break;
		}
	}
	cout<<res;
	return 0;
}
