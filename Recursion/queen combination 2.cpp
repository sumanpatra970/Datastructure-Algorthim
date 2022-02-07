#include<iostream>
using namespace std;
void solution(int qsf,int n,int row,int col,string asf,int *v){
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
	for(int i=0;i<4;i++){
		if(v[i]==0){
			v[i]=1;
			solution(qsf+1,n,nr,nc,yans,v);
			v[i]=0;
		}
	}
	solution(qsf,n,nr,nc,nans,v);
	return ;
}
int main(){
	int n=4;
	int v[4]={0,0,0,0};
	solution(0,n,0,0,"",v);
}
