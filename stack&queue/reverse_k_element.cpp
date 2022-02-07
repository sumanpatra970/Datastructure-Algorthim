#include<iostream>
#include<queue>
#include<vector>
using namespace std;
queue<int> solve(queue<int> q,int k,int n,vector<int> v){
	if(n==k){
		queue<int> qq;
		vector<int>::iterator it;
		it=v.end();
		it--;
		while(it>=v.begin()){
			qq.push(*it);
			it--;
		}
		while(!q.empty()){
			qq.push(q.front());
			q.pop();
		}
		return qq;
	}
	int temp=q.front();
	q.pop();
	v.push_back(temp);
	q=solve(q,k,n+1,v);
	return q;
}
int main(){
	queue<int> q;
	int k=3;
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		q.push(a[i]);
	}
	int n=0;
	vector<int> v;
	q=solve(q,k,n,v);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
