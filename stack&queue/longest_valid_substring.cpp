#include<iostream>
#include<stack>
using namespace std;
int main(){
	string st="()(())()";
	stack<char> stck;
	int n=st.length();
	int g=0;
	for(int i=0;i<n;i++){
		if(st[i]=='('){
			stck.push('(');
		}
		else{
			if(stck.size()!=0){
				stck.pop();
			}
			else{
				stck.push(')');
			}
		}
	}
	int k=0;
	while(!stck.empty()){
		k++;
		char x=stck.top();
		stck.pop();
	}
	cout<<st.length()-k;
	return 0;
}
