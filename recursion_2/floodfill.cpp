#include<iostream>
using namespace std;
void floodfill(int visited[4][4],int a[4][4],int sr,int sc,int dr,int dc,string op){
	if(sr>dr || sc>dc || sr<0 || sc<0 || a[sr][sc]==1 || visited[sr][sc]==1){
		return ;
	}
	if(sr==dr && sc==dc){
		cout<<op<<" ";
		return ;
	}
	visited[sr][sc]=1;
	floodfill(visited,a,sr-1,sc,dr,dc,op+"t");
	floodfill(visited,a,sr,sc-1,dr,dc,op+"l");
	floodfill(visited,a,sr+1,sc,dr,dc,op+"d");
	floodfill(visited,a,sr,sc+1,dr,dc,op+"r");
	visited[sr][sc]=0;
	return ;
}
int main(){
	int visited[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			visited[i][j]=0;
		}
	}
	int a[4][4]={{0,1,1,1},{0,1,1,1},{0,0,0,1},{0,0,0,0}};
	floodfill(a,visited,0,0,3,3,"");
}
