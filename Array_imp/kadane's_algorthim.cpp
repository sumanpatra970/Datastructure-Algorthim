#include<iostream>
using namespace std;
int main(){
	int n=6;
	int a[6]={1,2,3,4,-2,8};
	int rs=0;
	int lp=0;
	int cs=0;
	for(int i=0;i<n;i++){
		cs=cs+a[i];
		if(cs>rs){
			rs=cs;
			lp=i;
		}
	}
	cout<<"max sum "<<rs<<endl;
	for(int j=0;j<lp+1;j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
