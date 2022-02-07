#include<iostream>
using namespace std;
int I=54540;
int main(){
	int I=56434;
	int a[5][5]={
				{0,10,5,0,0},
				{0,0,0,1,0},
				{0,1,0,9,0},
				{0,0,0,0,-11},
				{0,0,2,0,0}
				};
	int n=5;
	int d[n]={0,I,I,I,I};
	int src=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(a[j][k]!=0){
					if(d[j]+a[j][k]<d[k]){
						d[k]=d[j]+a[j][k];
					}
				}
			}
		}
	}
	for(int l=0;l<n;l++){
		cout<<d[l]<<" ";
	}
	return 0;
}
