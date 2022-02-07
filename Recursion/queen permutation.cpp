#include<iostream>
using namespace std;
int counter=0;
void solution(int a[4][4],int *v,int c){
	if(c==5){
		counter++;
		cout<<"ok "<<counter<<endl;
		return ;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(a[i][j]==0){
				a[i][j]=1;
				solution(a,v,c+1);
				a[i][j]=0;	
			}
		}
	}
}
int main(){
	int v[4]={0,0,0,0};
	int a[4][4];
	solution(a,v,1);
	return 0;
}
