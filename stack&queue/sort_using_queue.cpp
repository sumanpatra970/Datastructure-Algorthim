#include<iostream>
#include<queue>
using namespace std;
queue<int> solve(queue<int> q){
	if(q.size()==1){
		cout<<q.front()<<endl;
		return q;
	}
	int temp=q.front();
	q.pop();
	q=solve(q);
	q.push(temp);
	return q;
}
int main(){
	queue<int> q;
	int k=0;
	while(k!=1){
		int c;
		cout<<"enter element to queue";
		cin>>c;
		q.push(c);
		cout<<"enter 1 to stop";
		cin>>k;
	}
	cout<<q.front()<<endl;
	q=solve(q);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
