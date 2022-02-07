#include<iostream>
using namespace std;
int main(){
	int a[5][5]={{2,3,4,1,6},{8,2,3,9,10},{1,3,4,6,7},{11,12,0,14,5},{0,5,11,12,15}};
	int n=5;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i<j){
				int temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
		}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int k=0;k<n/2;k++){
		for(int l=0;l<n;l++){
			int t=a[l][k];
			a[l][k]=a[l][n-1-k];
			a[l][n-1-k]=t;
		}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
