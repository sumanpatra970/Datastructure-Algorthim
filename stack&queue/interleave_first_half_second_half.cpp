#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	int a[10]={11,12,13,14,15,16,17,18,19,20};
	int n=10;
	queue<int> q;
	for(int i=0;i<10;i++){
		q.push(a[i]);
	}
	stack<int> st;
	int k=0;
	while(k!=n/2){
		int t=q.front();
		st.push(t);
		q.pop();
		k++;
	}
	while(!st.empty()){
		q.push(st.top());
		st.pop();
	}
	k=0;
	while(k!=n/2){
		int t=q.front();
		q.pop();
		q.push(t);
		k++;
	}
	k=0;
	while(k!=n/2){
		int t=q.front();
		st.push(t);
		q.pop();
		k++;
	}
	while (!st.empty()) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
    	cout<<q.front()<<" ";
    	q.pop();
	}
	return 0;
}
