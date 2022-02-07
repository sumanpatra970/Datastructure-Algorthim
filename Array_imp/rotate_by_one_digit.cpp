#include<iostream>
using namespace std;
int main(){
	int n=6;
	int a[n]={1,2,3,4,5,8};
	int temp=a[n-1];
	for(int i=1;i<n;i++){
		a[i]=a[i-1];
	}
	a[0]=temp;
	for(int j=0;j<n;j++){
		cout<<a[j];
	}
	return 0;
}
