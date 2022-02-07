#include<iostream>
using namespace std;
void display(int t[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
}
void knighttour(int t[5][5],int n,int r,int c,int move){
	if(r<0 || c<0 || r>=5 || c>=5 || t[r][c]>0){
		return ;
	}
	if(move==25){
		t[r][c]=move;
		display(t);
		return;
	}
	t[r][c]=move;
	knighttour(t,n,r-2,c+1,move+1);
	knighttour(t,n,r-1,c+2,move+1);
	knighttour(t,n,r+1,c+2,move+1);
	knighttour(t,n,r+2,c+1,move+1);
	knighttour(t,n,r+2,c-1,move+1);
	knighttour(t,n,r+1,c-2,move+1);
	knighttour(t,n,r-1,c-2,move+1);
	knighttour(t,n,r-2,c-1,move+1);
	t[r][c]=0;
}
int main(){
	int n,r,c;
	n=5;
	r=2;
	c=3;
	int t[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			t[i][j]=0;
		}
	}
	knighttour(t,n,r,c,1);
	return 0;
}
