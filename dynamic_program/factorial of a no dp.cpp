#include<iostream>
using namespace std;
int fact(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int fn1=fact(n-1);
	int fn2=fact(n-2);
	int fn=fn1+fn2;
	return fn;
}
int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	cout<<fact(n);
}
