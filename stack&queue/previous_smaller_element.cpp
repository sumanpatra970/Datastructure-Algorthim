#include<iostream>
#include<stack>
using namespace std;
int main(){
	int a[5]={1,3,4,7,2};
	int ps[5];
	stack<int> st;
	for(int i=0;i<5;i++){
		if(st.empty()){
			st.push(a[i]);
			ps[i]=-1;	
		}
		else if(st.top()<a[i]){
			ps[i]=st.top();
			st.push(a[i]);
		}
		else{
			while(!st.empty() && st.top()>a[i]){
				st.top();
				st.pop();
			}
			if(st.empty()){
				ps[i]=-1;
			}
			else{
				ps[i]=st.top();	
			}
			st.push(a[i]);
		}
	}
	for(int j=0;j<5;j++){
		cout<<ps[j]<<" ";
	}
	return 0;
}
