#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int row;
	int col;
	int time;
};
int main(){
	int a[3][3]={{0,1,2},{0,1,2},{2,1,1}};
	queue<node*> q;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==2){
				node *t=new node;
				t->row=i;
				t->col=j;
				t->time=1;
				q.push(t);
			}
		}
	}
	while(!q.empty()){
		node *t=q.front();
		q.pop();
		int m=t->row;
		int n=t->col;
		int time=t->time;
		if(a[m-1][n]==1){
			a[m-1][n]=2;
			node *tt=new node;
			tt->row=m-1;
			tt->col=n;
			tt->time=time+1;
			q.push(tt);
		}
		if(a[m][n+1]==1){
			a[m][n+1]=2;
			node *tt=new node;
			tt->row=m;
			tt->col=n+1;
			tt->time=time+1;
			q.push(tt);
		}
		if(a[m+1][n]==1){
			a[m+1][n]=2;
			node *tt=new node;
			tt->row=m+1;
			tt->col=n;
			tt->time=time+1;
			q.push(tt);
		}
		if(a[m][n-1]==1){
			a[m][n-1]=2;
			node *tt=new node;
			tt->row=m;
			tt->col=n-1;
			tt->time=time+1;
			q.push(tt);
		}
	}
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
