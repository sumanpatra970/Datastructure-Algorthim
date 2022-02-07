#include<iostream>
using namespace std;
void solve(int a[6][6],int *q,bool *v,int x,int front){
	while(front<6){
		int y=q[front];
		front++;
		v[y]=1;
		cout<<y<<" ";
		for(int i=0;i<6;i++){
			if(a[y][i]==1 && v[i]==0){
				//cout<<"i "<<i<<" "<<x<<" ";
				q[x]=i;
			}
		}
		x++;
	}
}
int main(){
	int a[6][6]={{0,1,0,0,0,0},
				 {0,0,1,0,0,0},
				 {0,0,0,1,0,0},
				 {0,0,0,0,1,1},
				 {0,0,0,1,0,1},
				 {0,0,0,1,1,0}
	};
	int q[6];
	q[0]=0;
	bool v[6]={0,0,0,0,0,0};
	solve(a,q,v,1,0);
}
