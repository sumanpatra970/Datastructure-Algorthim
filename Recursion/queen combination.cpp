#include<iostream>
using namespace std;
void solution(int qsf,int n,int row,int col,string asf){
	if(row==4){
		if(qsf==4){
			cout<<asf<<" "<<endl;
		}
		return ;	
	}
	int nr=0;
	int nc=0;
	string yans,nans;
	if(col==3){
		nr=row+1;
		nc=0;
		yans=asf+"q\n";
		nans=asf+"-\n";
	}
	else{
		nr=row;
		nc=col+1;
		yans=asf+"q";
		nans=asf+"-";
	}
	solution(qsf+1,n,nr,nc,yans);
	solution(qsf,n,nr,nc,nans);
	return ;
}
int main(){
	int n=4;
	int op[4][4];
		for(int x=0;x<4;x++){
			for(int y=0;y<4;y++){
				op[x][y]=0;
			}
	}
	solution(0,n,0,0,"");
}
