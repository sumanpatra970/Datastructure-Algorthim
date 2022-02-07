#include<iostream>
using namespace std;
string solve(string s,int n){
	if(s.length()==1){
		return s;
	}
	char ch=s[0];
	s=solve(s.substr(1,n),n);
	s=s+ch;
	return s;
}
int main(){
	string s="abcds";
	cout<<solve(s,s.length());
	return 0;
}
