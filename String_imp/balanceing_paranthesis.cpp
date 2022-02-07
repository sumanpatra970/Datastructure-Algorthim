#include<iostream>
#include<stack>
using namespace std;
int main(){
	string st="()(())";
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
				cout<<"not balanced";
				g=1;
				break;
			}
		}
	}
	if(stck.size()!=0){
		cout<<"not balanced";
	}
	else if(g!=1){
		cout<<"balanced";
	}
	return 0;
}
