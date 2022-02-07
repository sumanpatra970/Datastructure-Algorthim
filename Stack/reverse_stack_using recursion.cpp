#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> st){
	if(st.size()==1){
		return ;
	}
	int ch=st.top();
	st.pop();
	solve(st);
	st.push(ch);
	return ;
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
