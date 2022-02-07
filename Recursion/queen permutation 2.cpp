#include<iostream>
using namespace std;
void solution(int qsf,int tq,int chess[4][4],int i,int j){
	if(qsf==tq){
		for(int a=0;a<4;a++){
			for(int b=0;b<4;b++){
				cout<<chess[a][b];
			}
			cout<<endl;
		}
		cout<<"ok"<<endl;
		return ;
	}
	for(int col=j+1;col<4;col++){
		chess[i][col]=1;
		solution(qsf+1,tq,chess,i,col);
	}
	for(int row=i+1;row<4;row++){
		for(int col=0;col<4;col++){
			chess[row][col]=1;
			solution(qsf+1,tq,chess,row,col);
			chess[row][col]=0;
		}
	}
	return ;
}
int main(){
	int chess[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			chess[i][j]=0;
		}
	}
	solution(0,4,chess,0,0);
	return 0;
}
