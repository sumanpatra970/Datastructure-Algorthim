#include<iostream>
#include<queue>
using namespace std;
int presentLadder(int n,int a[3][2]){
	for(int i=0;i<3;i++){
		if(a[i][0]==n){
			return a[i][1];
		}
	}
	return 0;
}
int presentSnake(int n,int a[1][2]){
	for(int i=0;i<3;i++){
		if(a[i][0]==n){
			return a[i][1];
		}
	}
	return 0;
}
void solve(int sp,int des,int a[3][2],int b[1][2],queue<int> q,int *v){
	bool found=false;
	int x;
	while(q.size()!=0){
		x=q.front();
		q.pop();
		cout<<"x "<<x<<endl;
		if(x==des){
			cout<<"found";
			found=true;
		}
		for(int i=1;i<7;i++){
			if(x+i<100 && !found){
				if(presentLadder(x+i,a) && v[x+i]==0 && !found){
					v[x+i]=1;
					q.push(presentLadder(x+i,a));				
				}
				else if(presentSnake(x+i,b) && v[x+i]!=0 && !found){
					v[x+i]=1;
					q.push(presentSnake(x+i,b));
				}
				else{
					v[x+i]=1;
					q.push(x+i);
				}
			}
		}
	}
	
	
}
int main(){
	int a[3][2]={{3,30},{31,100},{88,95}};
	int b[1][2]={{35,10}};
	int sp=1;
	int des=100;
	int v[100];
	for(int i=0;i<100;i++){
		v[i]=0;
	}
	v[1]=1;
	queue<int> q;
	q.push(1);
	solve(sp,des,a,b,q,v);
}
