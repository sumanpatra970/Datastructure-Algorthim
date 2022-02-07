#include<iostream>
#include<map>
using namespace std;
int main(){
	map<char,string> mp;
	mp['a']="1";
	mp['b']="11";
	mp['c']="111";
	mp['d']="2";
	mp['e']="22";
	mp['f']="222";
	mp['g']="3";
	mp['h']="333";
	string no="abd";
	string op="";
	for(int i=0;i<no.length();i++){
		op=op+mp[no[i]];
	}
	cout<<op;
	return 0;
}
