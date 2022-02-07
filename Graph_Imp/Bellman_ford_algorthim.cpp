//program for Bellman-ford algorthim
#include<iostream>
using namespace std;
int main(){
	int I=56434;
	int a[4][4]={
				{I,-2,4,I},
				{I,I,3,9},
				{I,I,I,5},
				{I,1,I,I},
				};
	int n=4;
	int d[n];
	for(int k=0;k<n;k++){
		d[k]=I;
	}
	int v[10];
	for(int l=0;l<10;l++){
		v[l]=0;
	}
	int m;
	int s=0;
	d[s]=0;
	int p=0;
	while(p<n){
		int min=I;
		for(int t=0;t<n;t++){
			if(min>d[t] && v[t]!=1){
				min=t;
			}
		}
		cout<<"min = "<<min;
		v[min]=1;
		s=min;
		int mini=I;
		for(int j=0;j<n;j++){
			if(a[s][j]!=I && mini>a[s][j]){
				if(d[j]>d[s]+a[s][j]){
					d[j]=d[s]+a[s][j];
				}
			}
		}
		p++;
	}
	cout<<"result is ";
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
}
