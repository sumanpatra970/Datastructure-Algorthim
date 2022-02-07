#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[n]={5,10,100,10,6};
	int d[2][n];
	d[0][0]=a[0];
	d[1][0]=0;
	for(int i=1;i<n;i++){
		d[0][i]=d[1][i-1]+a[i];
		d[1][i]=max(d[0][i-1],d[1][i-1]);
	}
	cout<<max(d[0][n-1],d[1][n-1]);
	return 0;
}
