#include<iostream>
using namespace std;
int main(){
	int a[4][5]={{10,12,14,30,45},{11,13,16,47,58},{13,24,29,63,64},{21,25,35,68,70}};
	int r=4;
	int c=5;
	int d=12;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==d){
				cout<<"found";
			}
		}
	}
	return 0;
}
