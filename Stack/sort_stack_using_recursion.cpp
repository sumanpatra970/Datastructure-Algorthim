#include<iostream>
#include<stack>
using namespace std;
stack<int> solve(stack<int> st){
	if(st.size()==1){
		return st;
	}
	int ch=st.top();
	st.pop();
	st=solve(st);
	if(ch>st.top()){
		st.push(ch);
	}
	else{
		stack<int> t;
		while(ch<st.top()){
			t.push(st.top());
			st.pop();
			if(st.size()==0){
				break;
			}
		}
		st.push(ch);
		while(t.size()!=0){
			st.push(t.top());
			t.pop();
		}
	}
	return st;
}
int main(){
	int a[5]={5,9,8,7,2};
	stack<int> st;
	for(int i=0;i<5;i++){
		st.push(a[i]);
	}
	solve(st);
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	return 0;
}
