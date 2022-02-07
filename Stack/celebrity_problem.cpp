#include<iostream>
#include<stack>
using namespace std;
int main(){
	int a[3][3]={{0,1,0},{0,0,0},{0,1,0}};
	int n=3;
	stack<int> st;
	for(int i=0;i<n;i++){
		st.push(i);
	}
	while(st.size()>1){
		int x=st.top();
		st.pop();
		int y=st.top();
		st.pop();
		if(a[x][y]==1){
			st.push(y);
		}
		if(a[y][x]==1){
			st.push(x);
		}
	}
	cout<<st.top();
	return 0;
}
