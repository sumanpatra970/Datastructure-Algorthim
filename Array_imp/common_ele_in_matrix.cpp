#include<iostream>
#include<map>
using namespace std;
int main(){
	int a[3][5]={{4,5,2,3,1},{1,9,8,7,0},{10,12,1,11,9}};
	int r=3;
	int c=5;
	map<int,int> mp;
	for(int j=0;j<c;j++){
		mp[a[0][j]]=1;
	}
	for(int i=1;i<r;i++){
		for(int j=0;j<c;j++){
			if(mp[a[i][j]]==i){
				mp[a[i][j]]=mp[a[i][j]]+1;
			}
		}
	}
	for(int k=0;k<c;k++){
		cout<<mp[k]<<" ";
	}
	return 0;
}
