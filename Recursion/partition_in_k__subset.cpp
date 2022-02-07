#include<iostream>
#include<vector>
using namespace std;
void solution(int i,int n,int k,int ss,vector<vector<int> >ans){
	if(i>n){
		if(ss==k){
			for(int x=0;x<ans.size();x++){
				for(int y=0;y<ans[x].size();y++){
					cout<<ans[x][y]<<" ";
				}
				cout<<" | ";
			}
		}
		return;
	}
	for(int j=0;j<ans.size();j++){
		if(ans[j].size()>0){
			ans[j].push_back(i);
			solution(i+1,n,k,ss,ans);
			ans[j].pop_back();
		}
		else{
			ans[j].push_back(i);
			solution(i+1,n,k,ss+1,ans);
			ans[j].pop_back();
			break;
		}
	}
}
int main(){
	int n=3;
	int k=2;
	vector<vector<int> > v;
	vector<int> v1,v2;
	v.push_back(v1);
	v.push_back(v2);
	solution(1,n,k,0,v);
	return 0;
}
