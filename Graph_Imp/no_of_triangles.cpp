#include<iostream>
using namespace std;
int main(){
	int a[4][4]={{0,1,1,0},{1,0,1,1},{1,1,0,1},{0,1,1,0}};
	int counter=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<4;k++){
				if(a[i][j]!=0 && a[j][k]!=0 && a[i][k]!=0){
					counter++;
				}
			}
		}
	}
	cout<<"no of triangles "<<counter/6;
	return 0;
}
