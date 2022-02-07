#include<iostream>
using namespace std;
int main(){
	int a[6]={1,6,5,3,2,4};
	int b[6]={1,2,3,4,5,6};//sort of a
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+b[i]*i;
	}
	cout<<sum;
	return 0;
}
