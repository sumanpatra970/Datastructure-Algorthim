#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s="aaabbc";
	int h[26];
	string op="";
	for(int j=0;j<26;j++){
		h[j]=0;
	}
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		int v=ch-97;
		if(h[v]==0){
			op=op+ch;
			h[v]=1;
		}
		else{
			op=op+"#";
		}
	}
	cout<<op;
	return 0;
}
