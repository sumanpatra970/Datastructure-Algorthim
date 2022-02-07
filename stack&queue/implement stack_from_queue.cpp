#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
	queue<int> qq;
	int k=0;
	while(k!=1){
		int kk,cc;
		cout<<"enter element to queue";
		cin>>kk;
		qq.push(kk);
		cout<<"enter 1 to stop";
		cin>>cc;
		k=cc;
	}
	cout<<"arae you interested for poping ,if yes, enter 0";
	cin>>k;
	while(k!=1){
		cout<<"poping ";
		int cc=qq.front();
		cout<<cc;
		qq.pop();
		cout<<"enter 1 to stop";
		int cv;
		cin>>cv;
		k=cv;
	}
	stack<int> st;
	while(!qq.empty()){
		st.push(qq.front());
		qq.pop();
	}
	cout<<"stack ";
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}
