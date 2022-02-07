#include<iostream>
using namespace std;
int safety(int grid[9][9],int i,int nr,int nc){
	for(int ii=0;ii<9;ii++)
	{
		if(grid[ii][nc]==i)
		{
			return false;
		}
	}
	for(int jj=0;jj<9;jj++)
	{
		if(grid[nr][jj]==i)
		{
			return false;
		}
	}
	int si=(nr/3)*3;
	int sj=(nc/3)*3;
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<3;y++)
		{
			if(grid[si+x][sj+y]==i)
			{
				return false;
			}
		}
	}
	return true;
}
void sudoko(int a[9][9],int r,int c){
	if(r==9){
		for(int x=0;x<9;x++){
			for(int y=0;y<9;y++){
				cout<<a[x][y]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
	int ni=0;int nj=0;
	if(c==8){
		ni=r+1;
		nj=0;
	}
	else{
		ni=r;
		nj=c+1;
	}
	if(a[r][c]==0){
		for(int po=1;po<10;po++){
			if(safety(a,po,r,c)){
				a[r][c]=po;
				sudoko(a,ni,nj);
				a[r][c]=0;
			}
		}
	}
	else{
		sudoko(a,ni,nj);
	}
	return ;
}
int main(){
	int a[9][9]={  	  { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					  { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					  { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					  { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					  { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					  { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					  { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					  { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					  { 0, 0, 5, 2, 0, 6, 3, 0, 0 } 
				};
	sudoko(a,0,0);
	return 0;
}
