#include<iostream>
using namespace std;
int main(){
	int a[10]={2,4,6,8,10,12,14,16,18,20};
	int n=10;
	int k=18;
	int x=2;
	int d;
	d=(k-a[0])/2;
	for(int i=d;i<n;i++){
		if(a[i]==k){
			cout<<"position "<<i+1;
			break;
		}
	}
	return 0;
}
