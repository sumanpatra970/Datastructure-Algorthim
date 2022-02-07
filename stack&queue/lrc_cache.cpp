#include<iostream>
#include<map>
#include<queue>
using namespace std;
int main(){
	string s="12324";
	queue<int> q;
	int res=0;
	int k=0;
	int n=3;
	map<int,int> mp;
	while(s.length()!=0){
		char ch=s[0];
		int v=ch-'0';
		if(q.empty()){
			res++;
			q.push(v);
			k++;
		}
		else{
			if(mp[v]==0){
				res++;
				mp[v]=1;
				if(k==n){
					int s=q.front();
					q.pop();
					mp[s]=0;
					q.push(v);
				}
				else{
					q.push(v);
						k++;
				}
			}
		}
		s=s.substr(1,s.length());
	}
	cout<<res;
	return 0;
}
