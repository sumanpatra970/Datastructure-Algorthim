//program to print floodfill path problem
#include<iostream>
using namespace std;
void print(int a[4][4],string op,bool visited[4][4],int sr,int sc){
	if(sr==3 && sc==3)
	{
		cout<<"path is = ";
		cout<<op<<" "<<endl;
	}
	if(sr<0 || sc<0 || sr>3 || sc>3 || a[sr][sc]==1 || visited[sr][sc]==true)
	{
		return ;
	}
	visited[sr][sc]=true;
	print(a,op+"r",visited,sr,sc+1);
	print(a,op+"t",visited,sr-1,sc);
	print(a,op+"l",visited,sr,sc-1);
	print(a,op+"b",visited,sr+1,sc);
}
int main(){
	int a[4][4]={{0,1,0,0},{0,0,1,1},{0,0,1,1},{0,0,0,0}};
	int m=4;
	int n=4;
	string op="";
	bool visited[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			visited[i][j]=false;
		}
	}
	print(a,op,visited,0,0);
	return 0;
}
