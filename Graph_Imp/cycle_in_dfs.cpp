#include<iostream>
using namespace std;
void solve(int a[6][6],int *q,bool *v,int x,int front){
	while(front!=x){
		int y=q[front];
		front++;
		for(int c=0;c<x;c++){
			cout<<q[c]<<" ";
		}
		cout<<endl;
		if(v[y]==1){
			cout<<"cycle is present"<<endl;
			continue;
		}else{
			v[y]=1;	
		}
		cout<<y<<endl;
		for(int i=0;i<6;i++){
			if(a[y][i]==1 && v[i]==0){
				//cout<<"i "<<i<<" "<<x<<" ";
				q[x]=i;
				x++;
			}
		}
	}
}
int main(){
	int a[6][6]={{0,1,0,0,1,0},
				 {0,0,1,0,0,0},
				 {0,0,0,1,0,0},
				 {0,0,0,0,1,1},
				 {1,0,0,1,0,0},
				 {0,0,0,1,0,0}
	};
	int q[6]={0,0,0,0,0,0};
	q[0]=0;
	bool v[6]={0,0,0,0,0,0};
	solve(a,q,v,1,0);
}
