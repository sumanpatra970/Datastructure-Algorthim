#include<map>
#include<iostream>
#include<stack>
using namespace std;
class stackk{
	public:
	void solve(string op,stack<int> st){
		while(op.length()>0){
			char ch1=op[0];
			if(st.size()>1  && ch1=='+' || ch1=='-' || ch1=='*' || ch1=='/'){
				int a=st.top();
				st.pop();
				int b=st.top();
				st.pop();
				if(ch1=='+'){
					st.push(b+a);
				}
				else if(ch1=='-'){
					st.push(b-a);
				}
				else if(ch1=='*'){
					st.push(b*a);
				}
				else{
					st.push(b/a);
				}
				op=op.substr(1,op.length());
			}
			else{
				char chc=op[0];
				int a=chc-'0';
				st.push(a);
				op=op.substr(1,op.length());
			}
		}
		cout<<st.top();
	}
};
int main(){
	map<char,int> mp;
	mp['+']=1;
	mp['-']=1;
	mp['*']=2;
	mp['/']=2;
	string ip="1+3-4*5";
	string op="";
	stack<char> st;
	while(ip.length()>0){
		char ch=ip[0];
		if(ch=='-' || ch=='+' || ch=='*' || ch=='/'){
			if(st.empty()){
				st.push(ch);
				ip=ip.substr(1,ip.length());
			}
			else if(mp[ch]>mp[st.top()]){
				st.push(ch);
				ip=ip.substr(1,ip.length());
			}
			else{
				while( !st.empty() && mp[ch]<=mp[st.top()]){
					char chh=st.top();
					st.pop();
					op=op+chh;
				}
				st.push(ch);
				ip=ip.substr(1,ip.length());
			}
		}
		else
			{
				op=op+ch;
				ip=ip.substr(1,ip.length());
			}	
	}
	while(!st.empty()){
		op=op+st.top();
		st.pop();
	}
	cout<<op<<endl;
	stackk stt;
	stack<int> sty;
	stt.solve(op,sty);
	return 0;
}
