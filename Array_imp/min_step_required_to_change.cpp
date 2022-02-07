#include<iostream>
using namespace std;
int main(){
	int a[7]={2,4,5,6,5,4,1};
	int n=7;
	int d=n/2;
	int step=0;
	for(int i=0;i<d;i++){
		if(a[i]!=a[n-1-i]){
			step++;
		}
	}
	cout<<step;
	return 0;
}
