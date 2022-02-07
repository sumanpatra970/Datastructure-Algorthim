#include<iostream>
using namespace std;
bool safe(int *col,int *dig,int *dign,int i,int j){
	if(col[j]==1){
		return false;
	}
	if(dig[i+j]==true ||  dign[(i-j)+3]==true)
	{
		return false;
	}
	return true;
}
void nqueen(int a[4][4],int *col,int *dig,int *dign,int sr,int sc){
	if(sr>3){
		cout<<"output"<<endl;
		for(int x=0;x<4;x++){
			for(int y=0;y<4;y++){
				cout<<a[x][y]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
		for(int j=0;j<4;j++){
			if(safe(col,dig,dign,sr,j)){
				a[sr][j]=5;
				col[j]=1;
				dig[sr+j]=true;
				dign[(sr-j)+3]=true;
				nqueen(a,col,dig,dign,sr+1,j);
				dig[sr+j]=false;
				dign[(sr-j)+3]=false;
				col[j]=0;
				a[sr][j]=0;
			}		
		}
		return ;
}
int main(){
	int a[4][4];
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			a[x][y]=0;
		}
	}
	int col[4]={0,0,0,0};
	int dig[8]={0,0,0,0,0,0,0,0};
	int dign[8]={0,0,0,0,0,0,0,0};
	nqueen(a,col,dig,dign,0,0);
	return 0;
}
