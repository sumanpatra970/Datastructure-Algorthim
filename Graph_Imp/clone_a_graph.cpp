#include<iostream>
using namespace std;
int main(){
	int data[5][2]={{0,0},{2,4},{1,3},{2,4},{1,3}};
	int a[5][5];
	for(int m=0;m<5;m++){
		for(int n=0;n<5;n++){
			a[m][n]=0;
		}
	}
	for(int i=0;i<5;i++){
		a[i][0]=0;
		a[0][i]=0;
	}
	for(int j=1;j<5;j++){
		a[j][data[j][0]]=data[j][1];
	}
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
}
