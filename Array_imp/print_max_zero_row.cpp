#include<iostream>
using namespace std;
int main(){
	int a[4][4]={{1,0,9,2},{2,3,4,5},{0,0,0,1},{2,0,9,0}};
	int r=4;
	int c=4;
	int maxx=-1;
	int cc;
	for(int i=0;i<r;i++){
		cc=0;
		for(int j=0;j<c;j++){
			if(a[i][j]==0){
				cc++;
			}
		}
		maxx=max(cc,maxx);
	}
	cout<<maxx;
	return 0;
}
