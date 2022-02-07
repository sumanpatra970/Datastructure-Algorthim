#include<iostream>
using namespace std;
int main(){
	int a[4]={4,1,2,5};
	int b[4]={9,4,6,7};
	int sa[4]={5,4,2,1};
	int sb[4]={9,7,6,4};
	int sum=0;
	for(int i=0;i<4;i++){
		int s=a[i]-b[i];
		if(s<0){
			s=s-2*s;
		}
		sum=sum+s;
	}
	cout<<sum;
	return 0;
}
