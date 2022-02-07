#include<iostream>
using namespace std;
int main(){
	int d[5]={4,5,6,3,7};
	int p[5]={6,7,6,6,7};
	int balance=0;
	int i;
	for(i=0;i<5;i++){
		if(d[i]<p[i]){
			balance=balance+p[i]-d[i];
		}
		else{
			int dd=d[i]-p[i];
			if(balance>dd){
				balance=balance-dd;
			}
			else{
				cout<<i;
				break;
			}
		}
	}
	if(i==5){
		cout<<i;
	}
	return 0;
}
