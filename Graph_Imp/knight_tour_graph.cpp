#include<iostream>
using namespace std;
void knighttour(int a[6][6],int v[6][6],int n,int r,int c){
	if(r<0 || c<0 || r>5 || c>5 || v[r][c]==1){
		return ;
	}
	else if(n==36){
		cout<<"done all";
		return ;
	}
	else{
		v[r][c]=1;
		a[r][c]=n;
		knighttour(a,v,n+1,r-2,c+1);
		knighttour(a,v,n+1,r+2,c+1);
		knighttour(a,v,n+1,r-2,c-1);
		knighttour(a,v,n+1,r+2,c-1);
		knighttour(a,v,n+1,r-1,c+2);
		knighttour(a,v,n+1,r-1,c-2);
		knighttour(a,v,n+1,r+1,c-2);
		knighttour(a,v,n+1,r+1,c+2);
		return ;
	}
	
}
int main(){  
	int a[6][6];
	int v[6][6];
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			a[i][j]=0;
			v[i][j]=0;
		}
	}
	int counter=0;
	knighttour(a,v,counter,3,4);
	for(int ii=0;ii<6;ii++){
		for(int jj=0;jj<6;jj++){
			cout<<a[ii][jj]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
