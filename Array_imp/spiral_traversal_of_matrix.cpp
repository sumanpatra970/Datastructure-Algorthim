#include<iostream>
using namespace std;
int main(){
	int m[5][5]={{1,3,4,5,2},
				 {2,5,7,8,9},
				 {11,20,3,4,7},
				 {14,10,7,17,18},
				 {0,6,1,60,23}
	};
	int r=5;
	int c=5;
	int v[5][5];
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			v[x][y]=0;
		}
	}
	int i=0;
	while(i<r/2+1){
		for(int a=i;a<c-i;a++){
			if(v[i][a]==0){
				v[i][a]=1;
				cout<<m[i][a]<<" ";	
			}
		}
		for(int b=i;b<r-i;b++){
			if(v[b][c-1-i]==0){
				v[b][c-1-i]=1;
				cout<<m[b][c-1-i]<<" ";	
			}
		}
		for(int cc=c-1-i;cc>=0;cc--){
			if(v[r-1-i][cc]==0){
				v[r-1-i][cc]=1;
				cout<<m[r-1-i][cc]<<" ";	
			}
		}
		for(int d=r-1-i;d>=0;d--){
			if(v[d][i]==0){
				v[d][i]=1;
				cout<<m[d][i]<<" ";	
			}
		}
		i++;
	}
}
