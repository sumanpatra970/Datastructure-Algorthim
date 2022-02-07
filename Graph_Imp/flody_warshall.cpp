#include<iostream>
using namespace std;
int I=54540;
int main(){
	int a[5][5]={
				{0,2,5,I,I},
				{3,0,I,4,I},
				{I,I,0,2,3},
				{4,I,I,0,6},
				{I,I,I,I,0}
				};
	int n=5;
	int d[n]={0,I,I,I,I};
	int src=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(j!=k && j!=i && k!=i){
					if(a[j][k]>a[j][i]+a[i][k]){
						a[j][k]=a[j][i]+a[i][k];
					}
				}
			}
		}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			if(a[x][y]==54540){
				cout<<"I"<<" ";
			}
			else{
				cout<<a[x][y]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
