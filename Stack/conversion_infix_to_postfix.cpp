#include<iostream>
#include<map>
#include<stack>
using namespace std;
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
		cout<<ip<<" "<<op<<" ";
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
					cout<<"st "<<st.top()<<" ";
					char chh=st.top();
					st.pop();
					op=op+chh;
					cout<<"op "<<op;
				}
				st.push(ch);
				ip=ip.substr(1,ip.length());
			}
		}
		else
			{
				cout<<"in";
				op=op+ch;
				ip=ip.substr(1,ip.length());
			}	
			cout<<endl<<ip<<endl;
	}
	while(!st.empty()){
		op=op+st.top();
		st.pop();
	}
	cout<<op;
	return 0;
}
