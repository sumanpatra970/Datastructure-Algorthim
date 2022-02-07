#include<iostream>
using namespace std;
int main(){
	int a[8]={10,43,5,23,55,60,10,12};
	int h[8]={0,0,0,0,0,0,0,0};
	int lm=8000;
	for(int i=0;i<8;i++){
		if(a[i]<lm){
			lm=a[i];
			h[i]=a[i]-lm;
		}
		else{
			h[i]=a[i]-lm;
		}
	}
	int maxx=-1;
	for(int j=0;j<8;j++){
		cout<<h[j]<<" ";
		maxx=max(maxx,h[j]);
	}
	cout<<endl<<maxx;
	return 0;
}
