#include<iostream>
using namespace std;
int main(){
	int a=108;
	int b=90;
	int c=55;
	if(a<b && a>c || a>b && a<c){
		cout<<a<<" ";
	}
	else if(b<a && b>c || b>a && b<c){
		cout<<b<<" ";
	}
	else{
		cout<<c<<" ";
	}
	return 0;
}
