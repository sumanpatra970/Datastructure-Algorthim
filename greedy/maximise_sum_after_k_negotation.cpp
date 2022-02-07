#include<iostream>
using namespace std;
int main(){
	int a[6]={1,-6,-5,3,2,4};
	int k=3;
	int b[6]={-6,-5,1,2,3,4};//sort of a
	for(int i=0;i<6;i++){
		if(i==k){
			break;
		}
		if(b[i]<0){
			b[i]=b[i]-(2*b[i]);
		}
		else{
			b[i]=-b[i];
		}
	}
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+b[i];
	}
	cout<<sum;
	return 0;
}
