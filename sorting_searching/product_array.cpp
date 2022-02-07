#include<iostream>
using namespace std;
int main(){
	int a[5]={10,3,5,6,2};
	long int m=1;
	for(int i=0;i<5;i++){
		m=m*a[i];
	}
	int *b=new int[5];
	for(int i=0;i<5;i++){
		b[i]=m/a[i];
	}
	for(int i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
