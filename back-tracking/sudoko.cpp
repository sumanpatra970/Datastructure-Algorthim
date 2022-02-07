//program of sudoko solution
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
void getsol(int grid [9][9],int n,int r,int c)
{
	int ni=0;
	int nj=0;
	if(r==9)
	{
		cout<<"sudoko ans is "<<endl;
		for(int i=0;i<9;i++)
		{
    		for(int j=0;j<9;j++)
			{
    			cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
	if(c==8)
	{
		ni=r+1;
		nj=0;
	}
	else
	{
		ni=r;
		nj=c+1;
	}
	if(grid[r][c]!=0)
	{
		getsol(grid,n,ni,nj);
	}
	else
	{
		for(int i=1;i<=9;i++)
		{
			if(safety(grid,i,r,c)==true)
			{
				grid[r][c]=i;
				getsol(grid,n,ni,nj);
				grid[r][c]=0;
			}
		}
	}
}
int main()
{
	int grid[9][9]={  { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					  { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					  { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					  { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					  { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					  { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					  { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					  { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					  { 0, 0, 5, 2, 0, 6, 3, 0, 0 } 
				};
    getsol(grid,9,0,0);
    return 0;
}
