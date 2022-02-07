#include<iostream>
#include<stack>
using namespace std;
void getit(string ip,int c,int n,string op){
	if(c==n){
		cout<<"ok "<<op<<endl;
		return ;
	}
	for(int i=0;i<ip.length();i++){
		string ls=ip.substr(0,i);
		string rs=ip.substr(i+1,ip.length());
		getit(ip,c+1,n,op+ls+rs);
	}
	return ;
}
int solution(string ip,stack<char> v){
	for(int i=0;i<ip.length();i++){
		if(ip[i]=='('){
			v.push(ip[i]);
		}
		else if(ip[i]==')'){
			if(v.empty()==1){
				v.push(ip[i]);
			}
			else if(v.top()=='('){
				v.pop();
			}
			else if(v.top()==')'){
				v.push(ip[i]);
			}
		}
	}
	int counter=0;
	while(!v.empty()){
		v.pop();
		counter++;
	}
	return counter;
}
int main(){
	string ip="(())())";
	stack<char> v;
	int n=solution(ip,v);
	getit(ip,0,n,"");
	return 0;
}
