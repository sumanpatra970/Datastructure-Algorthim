#include<iostream>
using namespace std;
int main(){
	int a[5][5]={{0,0,0,1,1},{1,1,1,0},{1,1,1,1,1},{1,1,1,1,1},{0,0,1,0,1}};
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==1){
				a[i][j]=a[i-1][j]+1;
			}
			else{
				a[i][j]=0;
			}
		}
	}
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	int lb[5][5];
	int rb[5][5];
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			if(a[x][y]==0){
				//cout<<"1"<<endl;
				lb[x][y]=0;
			}
			else{
				int d=a[x][y];
				int k;
				for(k=y-1;k>=0;k--){
					if(a[x][k]==0){
						//cout<<"2"<<endl;
						lb[x][y]=k;
						break;
					}
					else if(a[x][k]<d){
						//cout<<"3"<<endl;
						lb[x][y]=k;
						break;
					}
				}
				if(k==-1){
					lb[x][y]=-1;
				}
			}
		}
	}
	cout<<endl;
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<lb[x][y]<<" ";
		}
		cout<<endl;
	}
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			if(a[x][y]==0){
				rb[x][y]=0;
			}
			else{
				int d=a[x][y];
				int k;
				for(k=y+1;k<5;k++){
					if(a[x][k]>d || a[x][k]==0){
						rb[x][y]=k-1;
						break;
					}
				}	
				if(k==5){
					rb[x][y]=4;
				}
			}
		}
	}
	cout<<endl;
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<rb[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			int width=rb[x][y]-lb[x][y];
			int length=a[x][y];
			cout<<length*width<<" ";
		}
		cout<<endl;
	}
	return 0;
}


