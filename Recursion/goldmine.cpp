#include<iostream>
#include<vector>
using namespace std;
int maxx=0;
vector<int> travelcollect(int a[4][4],int i,int j,int v[4][4],vector<int> bag){
	if(i<0 || j<0 || i>=4 || j>=4 || a[i][j]==0 || v[i][j]!=0){
		return bag;
	}
	v[i][j]=1;
	bag.push_back(a[i][j]);
	bag=travelcollect(a,i-1,j,v,bag);
	bag=travelcollect(a,i,j-1,v,bag);
	bag=travelcollect(a,i+1,j,v,bag);
	bag=travelcollect(a,i,j+1,v,bag);
	return bag;
}
int getmax(int a[4][4],int n){
	int v[4][4];
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
			v[x][y]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=0){
				vector<int> bag;
				bag=travelcollect(a,i,j,v,bag);
				
				int sum=0;
				vector<int> :: iterator itr;
				for(itr=bag.begin();itr!=bag.end();itr++){
					sum=sum+*itr;
				}
				if(sum>maxx){
					maxx=sum;
				}
			}
		}
	}
	return maxx;
}
int main(){
	int a[4][4]={{1,0,0,3},{2,0,0,5},{0,3,0,9},{0,5,0,4}};
	int n=4;
	cout<<getmax(a,n);
}
